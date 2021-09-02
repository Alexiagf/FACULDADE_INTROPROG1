#include <stdio.h>
#include <math.h>

int main (){

float cateto1;
float cateto2;
float hipotenusa;

printf("\t----Calculo da Teorema de Pitagoras----\n\n");

printf("Insira valor do Cateto 1: ");
scanf("%f", &cateto1);

printf("Insira valor do Cateto 2: ");
scanf("%f", &cateto2);

hipotenusa = sqrt((cateto1*cateto1) + (cateto2*cateto2));

printf("\nA hipotenusa resulta em eh: %.2f", hipotenusa);

}

