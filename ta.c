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
    
        char ch;
    printf("��JA��Z�N�|�o��:Uppercase\n");
    printf("��Ja��z�N�|�o��:Lowercase\n");
    printf("��J0��9�N�|�o��:Digit\n");
    printf("��L�r���h���:�A���W��\n");
    printf("�п�J�@�Ӧr���G ");
    fflush(stdin);  // �M����J�w�İϡA�קK scanf Ū���줧�e��J������
    scanf(" %c", &ch); // �e���[�Ů�A�T�O�ॿ�TŪ����J�r��

    if (ch >= 'A' && ch <= 'Z') {//�d��]�w�bA-Z 
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {//�d��]�w�ba-z 
        printf("Lowercase\n");
    } else if (ch >= '0' && ch <= '9') {//�d��]�w�b0-9 
        printf("Digit\n");
    } else {
        printf("E1B18������\n");
    }

    system("pause");// �Ȱ��A���ݨϥΪ̫���
    system("CLS");// �M���ù�
    
    printf("�@�~�����I\n");

    return 0;
}
//�o�����@�~�ڭӤH�{���Z���`�ת��A�b�M�{���۳B�F�b�ӾǴ���A
//�ڤѯu�a�{���گ�ܧִN���X�ӡA���{��o�����a�R�F�ڤ@�ڴx�A
//���O�Ĥ@�����i�ܦۤv�����湧�Y�i�F�W�Y�A���ӥH���u�n��*
//�N�໴�P�e�R�ߡA���G����m�ڴN�ƤF�@�q�ɶ� �A�Ө�l���{��
//�b�ݨ��D�ث�j�������F�c�ϡA�]���b�W�ҦѮv��������L�A
//�b�Ĥ@��������A�X�{�F�ܦh�p���~�A����^�h�ݤW�Ҫ����q�� 
//�o�{�F���~�å[�H�ץ��A�٦��ѰO�bprintf��[;�o�اC�Ū����~
//���ګo�]���S�ݨ�ҥH���y�F�@�q�ɶ�
