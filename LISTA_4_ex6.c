#include <stdio.h>

int main (){

int i,j,somaL4 = 0, somaC2 = 0, somaDP = 0, somaDS = 0, somaTotal = 0, Matriz[5][5];

printf("\t------Calculos na Matriz------\n\n");

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("Insira valores para Matriz[%d][%d]:",i,j);
        scanf("%d",&Matriz[i][j]);

    if (i==3){
        somaL4= somaL4+Matriz[i][j];
    }

   if (j==1){
        somaC2= somaC2+Matriz[i][j];
	}

   if (i==j){
        somaDP= somaDP+Matriz[i][j];
	}

   if (i+j==4){
        somaDS= somaDS+Matriz[i][j];
	}

   somaTotal = somaTotal+Matriz[i][j];
 }
 }

 printf("\n Soma da linha 4: %i",somaL4);
 printf("\n Soma da coluna 2: %i",somaC2);
 printf("\n Soma da diagonal principal: %i",somaDP);
 printf("\n Soma da daigonal secundaria: %i",somaDS);
 printf("\n Soma total: %d \n",somaTotal);

 printf("\n\nMatriz:\n");
 for(i=0;i<4;i++){
  for(j=0;j<4;j++){
   printf(" Matriz[%d][%d]= %d \n",i,j,Matriz[i][j]);
 }
 }
}
