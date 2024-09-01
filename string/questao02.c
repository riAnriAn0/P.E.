#include <stdio.h>
#include <string.h>

int main(){

    char string[20];
    char destino[20];

    printf("\n\nDigite uma string: ");
    fgets(string, sizeof(string), stdin);

    strcpy(destino, string);

    int result = strcmp(destino, string);

    if ( !result )
    {   
        printf("\n\nString Digitada: %s", string);
        printf("String Copiada: %s", destino);
        printf("As strings sao identicas.\n\n");
    } else {
        printf("\n\nString Digitada: %s", string);
        printf("String Copiada: %s", destino);
        printf("As strings sao diferentes.\n\n");
    }
    
    
    return 0;
}