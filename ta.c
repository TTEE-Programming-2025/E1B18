#include <stdio.h>
#include <stdlib.h>
  
int main(void) {
    
    
    printf("        *****     *****        \n");
    printf("      ********* *********      \n");
    printf("    ***********************    \n");
    printf("   *************************   \n");
    printf("  ***************************  \n");
    printf("  ***************************  \n");
    printf("  *�w��Ө���������@�~�i���]* \n");
    printf("    ***********************    \n");
    printf("      *******************      \n");
    printf("        ***************        \n");
    printf("          ***********          \n");
    printf("            *******            \n");
    printf("              ***              \n");
    printf("               *               \n");

    system("pause"); // �Ȱ��A���ݨϥΪ̫���
    system("CLS");   // �M���ù�
    
    int password;
    printf("�п�J 4 ��ƱK�X�G ");
    scanf("%d", &password);

    if (password == password) {
        printf("�w��ӭ����k�i�J�t�ΡI\n");
    } else {
        printf("�K�X���~�I\a\n"); // \a ����ĵ�i�n
    }
    
    system("pause");// �Ȱ��A���ݨϥΪ̫���
    system("CLS");// �M���ù�
    
    printf("��JA��Z�N�|�o��:Uppercase\n");
    printf("��Ja��z�N�|�o��:Lowercase\n");
    printf("��J0��9�N�|�o��:Digit\n");
    printf("��L�r���h���:�A���W��\n");
    
    system("pause");// �Ȱ��A���ݨϥΪ̫���
    system("CLS");// �M���ù�
