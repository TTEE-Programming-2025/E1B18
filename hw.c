#include<stdio.h>
 #include<stdlib.h>
 #include <conio.h>
 
 
 int main(void)
 {
 	int password,i,attempts=0;
 	  printf("      *****     *****        \n");//�ӤH���� 
    printf("      ********* *********      \n");
    printf("    ***********************    \n");
    printf("   *************************   \n");
    printf("  ***************************  \n");
    printf("  ***************************  \n");
    printf(" ***�w��Ө���������@�~�i��***\n");
    printf("    ***********************    \n");
    printf("      *******************      \n");
    printf("        ***************        \n");
    printf("          ***********          \n");
    printf("            *******            \n");
    printf("              ***              \n");
    printf("               *               \n");

 	
 		
 	
 	while(attempts<3)
 	{
		printf("HINT�K�X��2025\n");
 		printf("�п�J�K�X:");
 		scanf("%d",&password);
 		if(password==2025)
 		{
 			printf("�K�X���T:");
		    system("CLS"); //�M�� 
 			break;
 		}
 		else
 		{
 			attempts++;
 			if(attempts<3)
 			{
 				printf("�K�X���~");
 			}
 			else
 			{
 				printf("�K�X���~�F�T���A�{���Y�N����");
 			}
 		}
 	}
 	 	system("pause");
     return 0;
 }
