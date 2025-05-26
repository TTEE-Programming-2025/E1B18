#include <stdio.h>
#include <stdlib.h>
  
int main(void) {
	int password, i, attempts = 0;
    
    
    printf("        *****     *****        \n");
    printf("      ********* *********      \n");
    printf("    ***********************    \n");
    printf("   *************************   \n");
    printf("  ***************************  \n");
    printf("  ***************************  \n");
    printf("  *歡迎來到黃郁翔的作業展示館* \n");
    printf("    ***********************    \n");
    printf("      *******************      \n");
    printf("        ***************        \n");
    printf("          ***********          \n");
    printf("            *******            \n");
    printf("              ***              \n");
    printf("               *               \n");
    
    while (attempts < 3) {
        printf("請輸入密碼(hint:2025): ");
        scanf("%d", &password);
        if (password == 2025) {
            printf("密碼正確\n");
            system("cls");  
            break;
        } else {
            attempts++;
            if (attempts < 3) {
                printf("密碼錯誤\n");
            } else {
                printf("密碼錯誤達三次，程式即將結束\n");
                return 0;
            }
        }
    }


}
