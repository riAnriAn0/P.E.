#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero_int; 
    float numero_float;
    char caractere;
    int *ptr_int;
    float *ptr_float;
    char *ptr_char;

    ptr_int = &numero_int;
    ptr_float = &numero_float;
    ptr_char = &caractere;


    printf("Digitie um valor para varialvel int: ");
    scanf("%d", &numero_int);
    printf("Digitie um valor para varialvel float: ");
    scanf("%f", &numero_float);
    printf("Digitie um valor para varialvel char: ");
    scanf("%s", &caractere);

    printf("\nvalores das variaveis: \n");
    printf("int: %d\n", numero_int);
    printf("int: %.2f\n", numero_float);
    printf("int: %c\n\n", caractere);

    *ptr_int = 10;
    *ptr_float = 15.5;
    *ptr_char =  65; // codigo ASCII para letra A

    printf("valores das variaveis alterados por ponteiros: \n");
    printf("int: %d\n", numero_int);
    printf("int: %.2f\n", numero_float);
    printf("int: %c\n\n", caractere);

    return 0;
}
