#include <stdio.h>

int main() {

int num, i, j;
int cont=0;
int mat[5][5];
int matrizNova[5][5];
int TmatrizNova;
int TamanhoMatriz = 5;

printf ("\t---Calculos na Matriz---\n\n");

printf("Insira o valor de A: ");
scanf("%i", &num);

for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
        printf("informe valor de mat[%d][%d]: ", i, j);
        scanf("%i", &mat[i][j]);
    }
}

for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
        if (mat[i][j] == num) {
        cont++;
        }
    }
}

for(i = 0; i < 2; i++ ){
    for(j = 0; j < 2; j++ ){
        if (mat[i][j] != num){
            matrizNova[i][j] = mat[i][j];
        }else{
            matrizNova[i][j] = 0;
        }
    }
}
printf("\n\nO numero %i eh repetido %d vezes",num, cont);
printf("\n\nMatriz sem o numero %i:\n", num);

for(i = 0; i < 2; i++ ){
    for(j = 0; j < 2; j++ ){
        printf("\nElemento[%i][%i] = %i\n", i, j, matrizNova[i][j]);
    }
}
}
