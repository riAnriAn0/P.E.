#include <stdio.h>
#include <string.h>

int main(){

    char strin_1[20], strin_2[20];
    int comp;

    printf("Digite a primeira string: ");
    fgets(strin_1, sizeof(strin_1), stdin);

    printf("Digite a segunda string: ");
    fgets(strin_2, sizeof(strin_2), stdin);

    strcat(strin_1, strin_2);

    comp = strlen(strin_1);

    if (comp > 15)
    {
        printf("String concatenada: %s", strin_1);
        printf("\nA string concatenada e muito longa");
    } else {
        printf("String concatenada: %s", strin_1);
        printf("\nA string concatenada e %s.", strin_1);
    }
    

    return 0;
}