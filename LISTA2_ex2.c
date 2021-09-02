#include <stdio.h>

int main (){

int diaf, diai, horaf, horai, total, diferenca;

printf("------\tHORAS DE JOGO------\n\n");

printf("Insira o dia inicial do jogo:\n");
scanf("%i", &diai);

printf("Insira a hora inicial do jogo:\n");
scanf("%i", &horai);

printf("Insira o dia final do jogo:\n");
scanf("%i", &diaf);

printf("Insira a hora final do jogo:\n");
scanf("%i", &horaf);

diferenca = (diaf - diai);

if (diai == diaf){
    total = (horaf - horai);
    printf("\nO total de horas de jogo eh: %i\n", total);
}else{
        if (diai != diaf){
            total = ((24 - horai) + horaf);
                if (total >= 24){
                    printf("\nQuantidade maxima de horas permitidas eh 24.\n");
                }else{
                    printf("\nO total de horas de jogo eh: %i\n", total);
                }
        }
    }
}

