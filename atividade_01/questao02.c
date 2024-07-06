#include <stdio.h>
#include <math.h>

int main(){

float num1;
float num2;

printf("Digite um numero:");
scanf("%f", &num1);

printf("Digite outro numero:");
scanf("%f", &num2);


float a = num1 + num2;
float b = num1 * pow(num2, 2);
float c = pow(num1, 2);
float d = sqrt(pow(num1,2) + pow(num2,2));
float e = sin(num1 - num2);
float f; 
f = fabs(num1);

printf("A) %.2f \n", a);
printf("B) %.2f \n", b);
printf("C) %.2f \n", c);
printf("D) %.2f \n", d);
printf("E) %.2f \n", e);
printf("F) %.2f", f);

return 0;
}