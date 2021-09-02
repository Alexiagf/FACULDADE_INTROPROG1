#include <stdio.h>
#include <math.h>

int main (){

float Lado1;
float Lado2;
float Lado3;
float areaT;
float P;

printf("\t----Calculo da Area de um Triangulo----\n\n");

printf("Insira valor do Lado 1: ");
scanf("%f", &Lado1);

printf("Insira valor do Lado 2: ");
scanf("%f", &Lado2);

printf("Insira valor do Lado 3: ");
scanf("%f", &Lado3);

P = ((Lado1 + Lado2 + Lado3) / 2);

areaT = sqrt (P * ((P - Lado1)* (P - Lado2) * (P - Lado3)) );

printf("\nA area do triangulo eh: %.2f", areaT);

}
