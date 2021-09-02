#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main () {

int a, b, maior;

printf("\t----Comparacao de numeros----\n\n");

printf ("Insira o primeiro valor:");
scanf("%i", &a);

printf ("Insira o segundo valor:");
scanf("%i", &b);

maior = ((a + b + abs( a - b)) / 2);

maior = abs(maior);

if (a == b){
    printf("\nOs valores informados sao iguais");
}else{
    printf("\nO maior valor eh: %i", maior);
}
}
