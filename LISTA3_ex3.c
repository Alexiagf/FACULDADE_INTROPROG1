#include <stdio.h>

int main (){

int i=1, num, contn = 0, contp = 0;

printf("\nInstrucoes:\n");
printf("\nPara encerrar a contagem digite 0.\n");

while (i != 0){
    printf("\nDigite um numero:");
    scanf("%f", &num);
    printf("Deseja encerrar?\n0 para sim\n1 para nao");
    scanf("%i",&i);

    if (num < 0){
        contn++;
    }else{
        contp++;
    }
}

printf("\nNessa lista ha %i numeros negativo(s).\n", contn);

return 0;

}
