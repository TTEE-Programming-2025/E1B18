#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int password,attempts=0,i,j,k;
	int seats[9][9];
	int wrong=0;
	
     printf("       *****     *****        \n");//個人風格 
    printf("      ********* *********      \n");
    printf("    ***********************    \n");
    printf("   *************************   \n");
    printf("  ***************************  \n");
    printf("  ***************************  \n");
    printf(" ***歡迎來到黃郁翔的作業展示***\n");
    printf("    ***********************    \n");
    printf("      *******************      \n");
    printf("        ***************        \n");
    printf("          ***********          \n");
    printf("            *******            \n");
    printf("              ***              \n");
    printf("               *               \n");

	while(attempts<3)
	{
		printf("密碼為2025\n");
		printf("請輸入密碼:");
		scanf("%d",&password);
		if(password==2025)
		{
			printf("密碼正確:");
			system("CLS");
			break;
		}
		else
		{
			attempts++;
			if(attempts<3)
			{
				printf("密碼錯誤");
			}
			else
			{
				printf("密碼錯誤達三次，程式即將結束");
			}
		}
	}
	for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            seats[i][j] = 0;
            
    char choice;
    while (1) {
        printf("\n---------[Booking System]---------\n");
        printf("a. Available seats\n");
        printf("b. Arrange for you\n");
        printf("c. Choose by yourself\n");
        printf("d. Exit\n");
        printf("----------------------------------\n");
        printf("請選擇：");
        scanf(" %c", &choice);
        
         if (choice == 'a') {//選擇A 
            printf(" 123456789\n");
            for (i = 8; i >= 0; i--) {
                printf("%d", i + 1);
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == 0) printf("-");
                    else if (seats[i][j] == 1) printf("*");
                    else if (seats[i][j] == 2) printf("@");
                }
                printf("\n");
            }
        }
         else if (choice == 'b') {//選擇B 
            int need;
            printf("需要幾個座位？(1~4)：");
            scanf("%d", &need);
            if (need < 1 || need > 4) {
                printf("數量不合法。\n");
                continue;
            }

            int found = 0;
            for (i = 0; i < 9 && found == 0; i++) {
                for (j = 0; j <= 9 - need; j++) {
                    int ok = 1;
                    for (k = 0; k < need; k++) {
                        if (seats[i][j + k] != 0) {
                            ok = 0;
                            break;
                        }
                    }
                    if (ok) {
                        for (k = 0; k < need; k++)
                            seats[i][j + k] = 2;
                        found = 1;
                        break;
                    }
                }
            }

            if (!found) {
                printf("找不到連續座位。\n");
                continue;
            }

            printf(" 123456789\n");
            for (i = 8; i >= 0; i--) {
                printf("%d", i + 1);
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == 0) printf("-");
                    else if (seats[i][j] == 1) printf("*");
                    else if (seats[i][j] == 2) printf("@");
                }
                printf("\n");
            }

            char ok;
            printf("是否滿意這些座位？(y/n)：");
            scanf(" %c", &ok);
            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == 2) {
                        if (ok == 'y') seats[i][j] = 1;
                        else seats[i][j] = 0;
                    }
                }
            }
        }
        else if (choice == 'c') {//選擇C 
            int col, row;
            printf("請輸入座位（列-行，例如 3-5）：");
            scanf("%d-%d", &col, &row);
            if (col < 1 || col > 9 || row < 1 || row > 9) {
                printf("超出範圍。\n");
                continue;
            }
            if (seats[row - 1][col - 1] != 0) {
                printf("此座位已被預訂。\n");
                continue;
            }
            seats[row - 1][col - 1] = 1;

            printf(" 123456789\n");
            for (i = 8; i >= 0; i--) {
                printf("%d", i + 1);
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == 0) printf("-");
                    else if (seats[i][j] == 1) printf("*");
                    else if (seats[i][j] == 2) printf("@");
                }
                printf("\n");
            }
        }
         
        else if (choice == 'd') {// 離開或繼續
            char again;
            printf("Continue? (y/n)：");
            scanf(" %c", &again);
            if (again == 'y') continue;
            else {
                printf("感謝使用，再見！\n");
                break;
            }
        }

        else {
            printf("無效選項。\n");
        }
    }
  
    system("pause");
	return 0;
}
    //透過這次寫的程式讓我了解可以怎麼樣用訂位的程式
	//也讓我很訝異原來程式可以辦到的東西有那麼多
	//而我也漸漸的發現程式的樂趣
	//雖然在寫不出來的時候會覺得很煩躁
	//但一旦看到程式開始執行後那個快樂的感覺真的很難形容
	//而往後我也想要嘗試用程式做出更多的東西來精進自己
	//希望到時候可以很熟練的寫出程式 
