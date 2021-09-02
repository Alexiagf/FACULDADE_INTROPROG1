#include <stdio.h>

int main (){

char nome[10];
float horasExTrabalhadas, bonus;
int numeroFaltas;

printf("\t----Bonificacoes----\n\n");

printf("Nome do Funcionario:");
scanf("%s", &nome);

printf("\nHoras Trabalhadas:");
scanf("%f", &horasExTrabalhadas);

printf("\nTotal de Faltas:");
scanf("%i", &numeroFaltas);

bonus = (horasExTrabalhadas - ((2 * numeroFaltas) / 3));

if (bonus > 40.0) {
    printf("\nA bonificacao de %s eh de R$1.000,00\n", nome);
}else{
        if (bonus > 30.0 && bonus <= 40.0){
            printf("\nA bonificacao de %s eh de R$800,00\n", nome);
        }else{
                if (bonus > 20.0 && bonus <= 30.0){
                    printf("\nA bonificacao de %s eh de R$600,00\n", nome);
                }else{
                        if (bonus > 10.0 && bonus <= 20.0){
                            printf("\nA bonificacao de %s eh de R$400,00\n", nome);
                        }else{
                                if (bonus <= 10.0){
                                    printf("\nA bonificacao de %s eh de R$200,00\n", nome);
                                }else{
                                        printf("\nA bonificacao de %s eh inferior a R$200,00\n", nome);
                                }
                        }
                }
        }
}
}

