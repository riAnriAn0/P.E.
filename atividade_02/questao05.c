#include <stdio.h>
#include <math.h>

int main(){

    float x ,y , z;

    printf(" DIGITE AS MEDIDAS DOS LADOS DO TRIANGULO:\n");
    printf(" LADO 01: ");
    scanf("%f", &x);
    printf(" LADO 02: ");
    scanf("%f", &y);
    printf(" LADO 03: ");
    scanf("%f", &z);

    if ( x == y && y == z && x == z)
    {
        printf("\n ESSE TRIANGULO E : Equilatero");

    } else if ( x == y || y == z || z == x )
    {
        printf("\n ESSE TRIANGULO E : Isoscele");
    } else
    {
        printf("\n ESSES TRIANGULO E : Escaleno");
    }
    
    return 0;
}