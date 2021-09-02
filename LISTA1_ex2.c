#include <stdio.h>

int main (){

float volumeL;
float raioL;
float alturaL;

printf("\t----Calculo de volume----\n\n");

printf("Insira o raio da lata: ");
scanf("%f", &raioL);

printf("\nInsira a altura da lata: ");
scanf("%f", &alturaL);

volumeL = (3.14 * ((raioL * raioL) * alturaL));

printf("\nO volume da lata eh: %.2f", volumeL);

}
