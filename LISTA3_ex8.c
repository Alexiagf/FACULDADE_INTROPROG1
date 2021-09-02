#include <stdio.h>

int main (){

int opcao, contasenc, totaldias;
float valortotal;
char nome[10];

printf("\n\nOpcoes no sistema:\n\n-1 para encerrar a conta do hospede;\n-2 para verificar o numero de contas encerradas;\n-3 para finalizar a execucao;\n");
scanf("%i", &opcao);

while (opcao != 3){
    if(opcao == 1){

        printf("\t---Opcao escolhida: 1 - encerrar conta---\n\n");

        printf("Insira o numero de diarias:");
        scanf("%i", &totaldias);

            if (totaldias  < 15.0 ){
                valortotal = (totaldias * 7.50);
            }else{
                if(totaldias  == 15.0){
                   valortotal = (totaldias * 6.50);
                }else{
                    if(totaldias > 15.0){
                    valortotal = (totaldias * 5.0);
        }

    }

}contasenc++;

        printf("O valor total a ser pago pela hospede eh:%.2f", valortotal);
        printf("\n\nOpcoes no sistema:\n\n-1 para encerrar a conta do hospede;\n-2 para verificar o numero de contas encerradas;\n-3 para finalizar a execucao;\n");
        scanf("%i", &opcao);

    }else{
        if(opcao == 2){
            printf("\t---Opcao escolhida: 2 - contas encerradas---\n\n");
            printf("O numero de hospedes que deixaram o hotel foi: %i", contasenc);
            printf("\n\nOpcoes no sistema:\n\n-1 para encerrar a conta do hospede;\n-2 para verificar o numero de contas encerradas;\n-3 para finalizar a execucao;\n");
            scanf("%i", &opcao);

        }else{
            if(opcao == 3){
                exit(0);
            }
        }

    }

}
return 0;
}
