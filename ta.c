#include <stdio.h>
#include <stdlib.h>
  
int main(void) {
    
    
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

    system("pause"); // 暫停，等待使用者按鍵
    system("CLS");   // 清除螢幕
    
    int password;
    printf("請輸入 4 位數密碼： ");
    scanf("%d", &password);

    if (password == password) {
        printf("歡迎帥哥美女進入系統！\n");
    } else {
        printf("密碼錯誤！\a\n"); // \a 產生警告聲
    }
    
    system("pause");// 暫停，等待使用者按鍵
    system("CLS");// 清除螢幕
