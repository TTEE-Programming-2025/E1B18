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
    
        char ch;
    printf("輸入A到Z將會得到:Uppercase\n");
    printf("輸入a到z將會得到:Lowercase\n");
    printf("輸入0到9將會得到:Digit\n");
    printf("其他字元則顯示:你的名稱\n");
    printf("請輸入一個字元： ");
    fflush(stdin);  // 清除輸入緩衝區，避免 scanf 讀取到之前輸入的換行
    scanf(" %c", &ch); // 前面加空格，確保能正確讀取輸入字元

    if (ch >= 'A' && ch <= 'Z') {//範圍設定在A-Z 
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {//範圍設定在a-z 
        printf("Lowercase\n");
    } else if (ch >= '0' && ch <= '9') {//範圍設定在0-9 
        printf("Digit\n");
    } else {
        printf("E1B18黃郁翔\n");
    }

    system("pause");// 暫停，等待使用者按鍵
    system("CLS");// 清除螢幕
    
    printf("作業完成！\n");

    return 0;
}
//這次的作業我個人認為蠻有深度的，在和程式相處了半個學期後，
//我天真地認為我能很快就做出來，但現實卻狠狠地刪了我一巴掌，
//光是第一部分展示自己的風格鳩吃進了苦頭，本來以為只要用*
//就能輕鬆畫愛心，結果光位置我就排了一段時間 ，而其餘的程式
//在看到題目後大部分有了構圖，因為在上課老師都有提到過，
//在第一次打完後，出現了很多小錯誤，之後回去看上課的講義後 
//發現了錯誤並加以修正，還有忘記在printf後加;這種低級的失誤
//但我卻因為沒看到所以停頓了一段時間
