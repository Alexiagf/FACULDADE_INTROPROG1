#include <stdio.h>

int main (){

char opcao;
float baseT, alturaT, areaT, ladoQ, areaQ, baseR, alturaR, areaR;

printf("\t------AREAS------\n\n");

printf("Opcoes:\n\nT - Area do Triangulo\nQ - Area do Quadrado\nR - Area do Retangulo\n");
scanf("%c", &opcao);

if (opcao == 'T' || opcao == 't'){
    printf("Insira a base do triangulo:");
    scanf("%f", &baseT);
    printf("Insira a altura do triangulo:");
    scanf("%f", &alturaT);
    areaT = ((baseT * alturaT) / 2.0);
    printf("A area do triangulo eh: %.1f", areaT);
}else{
        if (opcao == 'Q' || opcao == 'q'){
            printf("Insira o lado do quadrado:");
            scanf("%f", &ladoQ);
            areaQ = (ladoQ * ladoQ);
            printf("A area do quadrado eh: %.1f", areaQ);
        }else{
                if(opcao == 'R' || opcao == 'r'){
                   printf("Insira a base do retangulo:");
                   scanf("%f", &baseR);
                   printf("Insira a altura do retangulo:");
                   scanf("%f", &alturaR);
                   areaR = (baseR * alturaR);
                   printf("A area do retangulo eh: %.1f", areaR);
                }else{
                    printf("Opcao invalida");
                }
        }
}
}
