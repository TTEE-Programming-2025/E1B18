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
    printf("  *�w��Ө���������@�~�i���]* \n");
    printf("    ***********************    \n");
    printf("      *******************      \n");
    printf("        ***************        \n");
    printf("          ***********          \n");
    printf("            *******            \n");
    printf("              ***              \n");
    printf("               *               \n");
    
    while (attempts < 3) {
        printf("�п�J�K�X(hint:2025): ");
        scanf("%d", &password);
        if (password == 2025) {
            printf("�K�X���T\n");
            system("cls");  
            break;
        } else {
            attempts++;
            if (attempts < 3) {
                printf("�K�X���~\n");
            } else {
                printf("�K�X���~�F�T���A�{���Y�N����\n");
                return 0;
            }
        }
    }


}
