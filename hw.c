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
             }
 
         } 
 		else if (choice=='b'||choice=='B') 
 		{
             system("CLS");
             int n;
             printf("�п�J 1 �� 9 ����ơG");
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
                 printf("��J���~�A�Э��s��J�I\n");
                 getch();
             }
 
         } 
 		else if (choice=='c'||choice=='C') 
 		{
             char confirm;
             printf("Continue? (y/n)�G");
             confirm = getch();
             printf("%c\n", confirm);
 
             if (confirm=='y'||confirm=='Y') 
 			{
                 continue; // �^��D���
             } else if (confirm=='n'||confirm=='N') 
 			{
                 printf("�����{���C\n");
                 break; // ����
             } else 
 			{
                 printf("��J���~�A�Э��s��J�I\n");
                 getch();
             }
         } 
 		else 
 		{
             printf("�L�Ī��ﶵ�A�Э��s��J�I\n");
             getch();
         }
     }
 	system("pause");
     return 0;
 }
 /*�g�L�o�����ҵ{�A�ڻ{���ڹ��git����i�@�B���z��
 �]����i�H���άݼv���N�����W�ǡA���o�����@�~�ڰO�o
 �n�����b���礤���L�������ҥH���_�ӨS����ܧx��
 ���]�O���ڤS��{����[���x�A�ڤ]�o�{ �A�@���n�g�o��
 ��������{���ڪ�{}�N�|�ܱ`�S������A�`�ڦb�����ܤ[
 �ҥH��ı�o�ڥH��n���ڪ��ƪ���n�ݨ����ڸѨM�o�譱�����D */ 
