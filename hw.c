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
 	 	system("pause");
     return 0;
 }
