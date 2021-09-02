#include <stdio.h>

int main (){

int altura, media_altura, soma_altura, i;
i = 0;
soma_altura = 0;

while(i < 20){
    printf("Qual a sua altura?");
    scanf("%i", &altura);
    soma_altura = soma_altura + altura;
    i++;
}

media_altura = (soma_altura / i);

printf("A media das alturas eh: %i centimetros\n", media_altura);

return 0;

}
