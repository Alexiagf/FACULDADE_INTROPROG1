#include <stdio.h>

int main(){

int qntAlunos, i, cont = 0;
float notasP1[100], nota1, notasP2[100], nota2, notasP3[100], nota3, mediaProvas, notaOf1, notaOf2, notaOf3, notasAlunos[100], mediaGeral, somaNotas;

printf ("\t---Calculo de nota dos Alunos---\n\n");

printf("Insira a quantidade de alunos da turma:");
scanf("%i", &qntAlunos);

for (i = 0; i < qntAlunos; i++){
    cont++;
    printf("\nPara o aluno %i insira a nota da prova 1:", cont);
    scanf("%f", &nota1);
    notaOf1 = nota1 * 0.3;
    notasP1[i] = nota1;

    printf("\nPara o aluno %i insira a nota da prova 2:", cont);
    scanf("%f", &nota2);
    notaOf2 = nota2 * 0.2;
    notasP2[i] = nota2;

    printf("\nPara o aluno %i insira a nota da prova 3:", cont);
    scanf("%f", &nota3);
    notaOf3 = nota3 * 0.4;
    notasP3[i] = nota3;

    mediaProvas = ((notaOf3 + notaOf2 + notaOf1) / 3.0);
    notasAlunos[i] = mediaProvas;

    printf("\nA media para o aluno %i eh de: %.1f", cont, mediaProvas);

    somaNotas = somaNotas + notasAlunos[i];

}
mediaGeral = (somaNotas / qntAlunos);

printf("\nA media geral da turma eh de: %.1f", mediaGeral);
}
