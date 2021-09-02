#include <stdio.h>

int main (){

char nome = 's';
float valor, total;

while(nome != 'n'){

    printf("\nInsira o valor da compra do cliente:");
    scanf ("%f", &valor);

    if(valor >  500.0){
        total = (0.80 * valor);
        printf("o total a pagar eh: R$%.2f\n", total);

        printf("\nDeseja continuar?\ns para sim\nn para nao");
        scanf("%c", &nome);
        scanf("%c", &nome);

    }else{
        if(valor <= 500.0)
        total = (0.85 * valor);
        printf("o total a pagar eh: R$%.2f\n", total);

        printf("Deseja continuar?\ns para sim\nn para nao");
        scanf("%c", &nome);
        scanf("%c", &nome);
    }
}
return 0;
}
