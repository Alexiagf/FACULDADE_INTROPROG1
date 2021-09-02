#include <stdio.h>

int main (){

int raioC;
float areaC;

printf("\t----Calculo da Circunferencia----\n\n");

printf("Insira o raio da circunferencia: ");
scanf("%d", &raioC);

areaC = (3.14 * raioC * raioC);

printf("\nA area da circunferencia eh: %.2f", areaC);
}
