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
 	//�e�X�D���
 	char choice,c,l;
 	int j,k;
 	while (1) 
 	{
         system("CLS"); // �M���e��
         printf("=====================\n");
         printf("| a. �e�����T����     |\n");
         printf("| b. ��ܭ��k��       |\n");
         printf("| c. ����             |\n");
         printf("=====================\n");
         printf("�п�J�ﶵ(a/b/c)�G");
     choice = getch();
         printf("%c\n", choice);
 
         if (choice == 'a' || choice == 'A') 
 		{
             system("CLS");
             char end_char;
             printf("�п�J�@�ӱq 'a' �� 'n' ���r���G");
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
                 printf("��J���~�A�Э��s��J�I\n");
                 getch();
             }}
 	 	system("pause");
     return 0;
 }}
