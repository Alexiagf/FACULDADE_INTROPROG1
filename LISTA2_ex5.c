#include <stdio.h>

#include <stdio.h>

int main (){

int lanche, bebida, sobremesa;
float precoC, precoB, precoS, total;

printf("\t----Pedidos Lanchonete----\n\n");

printf("\nCOMIDAS\n");

printf("\nEscolha um lanche:");
printf("\n- Hambuguer (1)");
printf("\n- chessburguer (2)");
printf("\n- cachorro quente (3)");
printf("\n- sanduiche (4)");
scanf("%i", &lanche);

if (lanche == 5 || lanche == 6 || lanche == 7 || lanche == 8 || lanche == 9){
    printf("\nAs outras opcoes serao liberadas quando escolher um lanche\n");
    printf("Escolha o lanche que deseja:\n");
    printf("- hamburguer (1)\n");
    printf("- chessburguer (2)\n");
    printf("- cachorro quente (3)\n");
    printf("- sanduiche (4)");
    scanf("%i", &lanche);
}

if (lanche == 0 || lanche >= 9){
    printf("\nOpcao inexistente, faca sua escolha:\n");
    printf("Escolha o lanche que deseja:\n");
    printf("- hamburguer (1)\n");
    printf("- chessburguer (2)\n");
    printf("- cachorro quente (3)\n");
    printf("- sanduiche (4)");
    scanf("%i", &lanche);
}

printf("\nBEBIDAS\n");

printf("\nEscolha uma bebiba:\n");
printf("- refrigerente (5)\n");
printf("- suco de laranja (6)\n");
printf("- milkshake (7)");
scanf("%i", &bebida);

if (bebida == 1 || bebida == 2 || bebida == 3 || bebida == 4 || bebida == 8 || bebida == 9){
    printf("\nSo eh possivel escolher uma comida\n");
    printf("A proxima sessao sera liberada quando escolher uma bebida\n");
    printf("Escolha a bebida que deseja:\n");
    printf("Escolha uma bebiba:\n");
    printf("- refrigerente (5)\n");
    printf("- suco de laranja (6)\n");
    printf("- milkshake (7)");
    scanf("%i", &bebida);
}

if (bebida == 0 || bebida > 9){
    printf("\nOpcao inexistente, faca sua escolha:\n");
    printf("Escolha o lanche que deseja:\n");
    printf("- refrigerante (5)\n");
    printf("- suco de laranha (6)\n");
    printf("- milkshake (7)");
    scanf("%i", &bebida);
}

printf("\nSOBREMESA\n");

printf("\nEscolha uma sobremesa:\n");
printf("- sundae (8)\n");
printf("- casquinha (9)\n");
scanf("%i", &sobremesa);

if (sobremesa == 1 || sobremesa == 2 || sobremesa == 3 || sobremesa == 4 || sobremesa == 5 || sobremesa == 6 || sobremesa == 7){
    printf("\nA bebida e a comida ja foram escolhidas\n");
    printf("Escolha a sobremesa que deseja:\n");
    printf("- sundae (8)\n");
    printf("- casquinha (9)\n");
    scanf("%i", &sobremesa);
}

if (sobremesa == 0 || sobremesa > 9){
    printf("\nOpcao inexistente, faca sua escolha:\n");
    printf("Escolha a sobremesa que deseja:\n");
    printf("- sundae (8)\n");
    printf("- casquinha (9)\n");
    scanf("%i", &sobremesa);
}

if (lanche == 1){
    precoC = 4.50;
}else{
        if(lanche == 2){
            precoC = 5.50;
        }else{
                if(lanche == 3){
                    precoC = 4.00;
                }else{
                        if(lanche == 4){
                            precoC = 3.50;
                        }else{
                            precoC = 0.0;
                        }

                }
        }
}

if (bebida == 5){
    precoB = 1.0;
}else{
        if (bebida == 6){
            precoB = 2.0;
        }else{
                if (bebida == 7){
                    precoB = 1.5;
                }else{
                    precoB = 0.0;
                }
        }
}

if (sobremesa == 8){
    precoS = 3.0;
}else{
        if (sobremesa == 9){
            precoS = 1.0;
        }else{
            precoS = 0.0;

        }

}

total = (precoC + precoB + precoS);

printf("\n\n");
printf("      ITENS          |    PRECO ");
printf("\n");
printf("---------------------------------");
printf("\n- Hambuguer (1)      | - R$ 4,50");
printf("\n- chessburguer (2)   | - R$ 5,50");
printf("\n- cachorro quente (3)| - R$ 4,00");
printf("\n- sanduiche (4)      | - R$ 3,50");
printf("\n- refrigerente (5)   | - R$ 1,00");
printf("\n- suco de laranja (6)| - R$ 2,00");
printf("\n- milkshake (7)      | - R$ 1,50");
printf("\n- sundae (8)         | - R$ 3,00");
printf("\n- casquinha (9)      | - R$ 1,00\n");

printf("\n\n------COMANDA------\n");

printf("\nItens escolhidos\nlanche: item (%i) R$:%.2f\nbebida: item (%i) R$:%.2f\nsobremesa: item (%i) R$:%.2f\n", lanche, precoC, bebida, precoB, sobremesa, precoS);
printf("\n\nTotal R$:%.2f\n",total);

}
