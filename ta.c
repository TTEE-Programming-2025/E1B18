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
    
    printf("輸入A到Z將會得到:Uppercase\n");
    printf("輸入a到z將會得到:Lowercase\n");
    printf("輸入0到9將會得到:Digit\n");
    printf("其他字元則顯示:你的名稱\n");
    
    system("pause");// 暫停，等待使用者按鍵
    system("CLS");// 清除螢幕
