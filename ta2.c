#include<stdio.h>
 #include<stdlib.h>
 #include <conio.h>
 
 
 int main(void)
 {
 	int password,i,attempts=0;
 	  printf("      *****     *****        \n");//個人風格 
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
		printf("HINT密碼為2025\n");
 		printf("請輸入密碼:");
 		scanf("%d",&password);
 		if(password==2025)
 		{
 			printf("密碼正確:");
		    system("CLS"); //清除 
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
 	//畫出主選單
 	char choice,c,l;
 	int j,k;
 	while (1) 
 	{
         system("CLS"); // 清除畫面
         printf("=====================\n");
         printf("| a. 畫直角三角形     |\n");
         printf("| b. 顯示乘法表       |\n");
         printf("| c. 結束             |\n");
         printf("=====================\n");
         printf("請輸入選項(a/b/c)：");
 
         choice = getch();
         printf("%c\n", choice);
 
         if (choice == 'a' || choice == 'A') 
 		{
             system("CLS");
             char end_char;
             printf("請輸入一個從 'a' 到 'n' 的字母：");
             scanf(" %c", &end_char);
 
             if (end_char>='a'&&end_char<='n') 
 			{
                 for (c='a'; c<=end_char;c++) 
 				{
                     for (l='a';l<=c;l++) 
 					{
                         printf("%c ",l);
                     }
                     printf("\n");
                 }system("pause");
             } else 
 			{
                 printf("輸入錯誤，請重新輸入！\n");
                 getch();
             }
 
         } 
 		else if (choice=='b'||choice=='B') 
 		{
             system("CLS");
             int n;
             printf("請輸入 1 到 9 的整數：");
             scanf("%d", &n);
 
             if (n>=1&&n<= 9) 
 			{
                 for (j=1;j<=n;j++) 
 				{
                     for (k=1;k<=n;k++) 
 					{
                         printf("%d*%d=%2d ", j,k,j*k);
                     }
                     printf("\n");
                 }system("pause");
             } 
 			else 
 			{
                 printf("輸入錯誤，請重新輸入！\n");
                 getch();
             }
 
         } 
 		else if (choice=='c'||choice=='C') 
 		{
             char confirm;
             printf("Continue? (y/n)：");
             confirm = getch();
             printf("%c\n", confirm);
 
             if (confirm=='y'||confirm=='Y') 
 			{
                 continue; // 回到主選單
             } else if (confirm=='n'||confirm=='N') 
 			{
                 printf("結束程式。\n");
                 break; // 結束
             } else 
 			{
                 printf("輸入錯誤，請重新輸入！\n");
                 getch();
             }
         } 
 		else 
 		{
             printf("無效的選項，請重新輸入！\n");
             getch();
         }
     }
 	system("pause");
     return 0;
 }
 


