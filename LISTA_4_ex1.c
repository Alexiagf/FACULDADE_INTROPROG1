#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){

int qntQ, i, ladosQ[6], ladoQ = 0, ladoQ1 = 0, ladoQ2 = 0, ladoQ3 = 0, ladoQ4 = 0, ladoQ5 = 0, ladoQ6 = 0;

printf ("\t---Contador de faces do dado---\n\n");

printf("Insira o numero de vezes que o dado foi lancado:");
scanf("%i", &qntQ);

	for(i = 1; i <= qntQ; i++){
        printf("Digite a face do dado:");
        scanf("%i", &ladoQ);
        ladosQ[i] = ladoQ;
            if (ladosQ[i] == 1){
                ladoQ1++;
            }else{
                if (ladosQ[i] == 2){
                    ladoQ2++;
                }else{
                    if (ladosQ[i] == 3){
                        ladoQ3++;
                    }else{
                        if (ladosQ[i] == 4){
                            ladoQ4++;
                        }else{
                            if (ladosQ[i] == 5){
                                ladoQ5++;
                            }else{
                                if (ladosQ[i] == 6){
                                    ladoQ6++;
                                }
                            }
                        }
                    }
                }
            }
	}


printf("\nA face 1 caiu %i vezes. \n", ladoQ1);
printf("A face 2 caiu %i vezes. \n", ladoQ2);
printf("A face 3 caiu %i vezes. \n", ladoQ3);
printf("A face 4 caiu %i vezes. \n", ladoQ4);
printf("A face 5 caiu %i vezes. \n", ladoQ5);
printf("A face 6 caiu %i vezes. \n", ladoQ6);
}
