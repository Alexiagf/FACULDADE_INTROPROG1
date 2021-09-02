#include <stdio.h>

int main (){

char i = 's';
int idade, somaidade, cont = 0, media;

while (i != 'n'){
    printf("\nDigite sua idade:");
    scanf("%i", &idade);

    if (idade > 0){
        cont++;
        somaidade = somaidade + idade;
        printf("Deseja digitar mais um valor?\nS para sim\nN para nao");
        scanf("%c",&i);
        scanf("%c",&i);

    }else{
        cont = cont + 0;
        somaidade = somaidade + 0;
        printf("Deseja digitar mais um valor?\nS para sim\nN para nao");
        scanf("%c",&i);
        scanf("%c",&i);
    }
}
media = (somaidade / cont);

printf("\nA media das idades inseridas %i.\n", media);

return 0;
}
