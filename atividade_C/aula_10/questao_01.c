#include <stdio.h>
#include <string.h>

int main(){

    char string[20];
    int lenght;

    printf("\n\nDigite uma string: ");
    fgets(string, sizeof(string), stdin);

    lenght = strlen(string);
    lenght -= 1;

    if ( lenght < 10 )
    {
        printf("\n\nComprimento da string: %d", lenght);
        printf("\nA string e curta.");
    } else {
        printf("\n\nComprimento da string: %d", lenght);
        printf("\nA string e longa.\n\n");
    }

    
    
    return 0;
}