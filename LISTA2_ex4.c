#include <stdio.h>

int main (){

float indiceP;

printf("\t----Indice de Poluicao----\n\n");

printf("Insira o Indice de Poluicao da sua empresa:");
scanf("%f", &indiceP);

if (indiceP >= 0.30 && indiceP < 0.40) {
    printf("\nEmpresas Pertencentes a lista A devem suspender suas atividades:\n");
}else{
        if (indiceP >= 0.40 && indiceP < 0.50 ){
            printf("\nEmpresas Pertencentes as listas A e B devem suspender suas atividades\n");
        }else{
                if (indiceP >= 0.50){
                    printf("\nEmpresas Pertencentes as listas A, B e C devem suspender suas atividades\n");
                }else{
                        printf("\nO indice de poluicao da empresa esta dentro da normalidade\n");
                }
        }
}
}
