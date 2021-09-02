#include <stdio.h>

int main (){

char gabaritoProva[20], respostaAluno[20];
int i, j, k, l, m,o, cont = 0, soma = 0;

printf ("\t---Informativo de aprovacao do aluno---\n\n");

for(i = 0; i < 2; i++){
    cont++;
    for(j = 0; j < 3; j++){
        printf("\nInsira o gabarito da questao:");
        scanf("%c", &gabaritoProva[j]);
        scanf("%c", &gabaritoProva[j]);
    }

    for(o = 0; o < 3; o++){
        printf("\nInsira a resposta do aluno para a questao:");
        scanf("%c", &respostaAluno[j]);
        scanf("%c", &respostaAluno[j]);
    }

    for (k = 0; k < 3; k++){
        for(l = 0; l < 3; l++){
            if(gabaritoProva[k] == respostaAluno[l]){
                soma++;
            }else{
                soma = soma;
            }
        }
    }

if(soma >= 3){
    printf("\nO aluno %i esta APROVADO\n", cont);
}else{
    printf("\nO aluno %i esta REPROVADO\n", cont);
}
}
}
