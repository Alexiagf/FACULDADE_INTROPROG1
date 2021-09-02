#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

char frase[100], palavra[100];
int i, j, qntOcorrencias = 0;

printf ("\t---Contador de palavras na frase---\n\n");

printf("Insira uma frase:");
gets(frase);

printf("\nInsira uma palavra:");
gets(palavra);

for (i = 0; i < strlen(frase); i++){
    for (j = 0; j < strlen(frase); j++){
        if (palavra[i] == frase[j]){
            qntOcorrencias++;
        }else{
            qntOcorrencias = qntOcorrencias;
        }
    }
    }
printf("\nA palavra foi repetida %i vezes na frase", qntOcorrencias);
}

