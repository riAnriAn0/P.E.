#include <stdio.h>
#include <string.h>

int main(){

    char string_01[20], string_02[20], string_03[20], string_04[20];

    printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite a primeira string:");
    fgets(string_01, sizeof(string_01), stdin);
    printf("Digite a segunda string:");
    fgets(string_02, sizeof(string_02), stdin);
    printf("Digite a terceira string:");
    fgets(string_03, sizeof(string_03), stdin);
    printf("Digite a quarta string: ");
    fgets(string_04, sizeof(string_04), stdin);

    if (strlen(string_01) < 10 )
    {
        strcat(string_01, string_02);
        printf("\n%s\n\n", string_01);
        char letra;

        int comp = strlen(string_01);

        for (int i = 0, j = comp - 1; i < j; i++, j--) {
            letra = string_01[i];
            string_01[i] = string_01[j];
            string_01[j] = letra;
        }
        printf("Inversa: %s\n", string_01);
    }
    else if (strlen(string_01) > 10 )
    {
        strcat(string_01, string_03);
        printf("\n%s\n\n", string_01);
        inversa(string_01);char letra;

        int comp = strlen(string_01);

        for (int i = 0, j = comp - 1; i < j; i++, j--) {
            letra = string_01[i];
            string_01[i] = string_01[j];
            string_01[j] = letra;
        }
        printf("Inversa: %s\n", string_01);
    }
    else
    {
        strcat(string_01, string_04);
        printf("\n%s\n\n", string_01);
        char letra;

        int comp = strlen(string_01);

        for (int i = 0, j = comp - 1; i < j; i++, j--) {
            letra = string_01[i];
            string_01[i] = string_01[j];
            string_01[j] = letra;
        }
        printf("Inversa: %s\n", string_01);
    }
    

    return 0;
}