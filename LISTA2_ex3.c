#include <stdio.h>

int main (){

int matricula;
float veriParciais1, veriParciais2, veriParciais3, exerc, aprovMedia;

printf("\t----Desempenho do Aluno----\n\n");

printf("Insira a matricula do aluno:");
scanf("%i", &matricula);

printf("\nNota na Verificacao Parcial 1:");
scanf("%f", &veriParciais1);

printf("\nNota na Verificacao Parcial 2:");
scanf("%f", &veriParciais2);

printf("\nNota na Verificacao Parcial 3:");
scanf("%f", &veriParciais3);

printf("\nNota do exercicio:\n");
scanf("%f", &exerc);

aprovMedia = ((veriParciais1 + veriParciais2 * 2.0 + veriParciais3 * 3.0 + exerc) / 7.0);

if (aprovMedia >= 9.0) {
    printf("\nA O aluno com matricula %i esta aprovado com conceito A\n", matricula);
    printf("\nAs notas nas avaliacoes sao: %.1f %.1f %.1f\n", veriParciais1, veriParciais2, veriParciais3);
    printf("\nA media dos exercicios eh: %.1f\n", exerc);
    printf("\nA media de aproveitamento eh de: %.1f\n", aprovMedia);
}else{
        if (aprovMedia >= 7.5 && aprovMedia < 9.0){
            printf("\nA O aluno com matricula %i esta aprovado com conceito B\n", matricula);
            printf("\nAs notas nas avaliacoes sao: %.1f %.1f %.1f\n", veriParciais1, veriParciais2, veriParciais3);
            printf("\nA media dos exercicios eh: %.1f\n", exerc);
            printf("\nA media de aproveitamento eh de: %.1f\n", aprovMedia);
        }else{
                if (aprovMedia >=6.0 && aprovMedia < 7.5){
                    printf("\nA O aluno com matricula %i esta aprovado com conceito C\n", matricula);
                    printf("\nAs notas nas avaliacoes sao: %.1f %.1f %.1f\n", veriParciais1, veriParciais2, veriParciais3);
                    printf("\nA media dos exercicios eh: %.1f\n", exerc);
                    printf("\nA media de aproveitamento eh de: %.1f\n", aprovMedia);
                }else{
                        if (aprovMedia >= 4.0 && aprovMedia < 6.0){
                            printf("\nA O aluno com matricula %i esta reprovado com conceito D\n", matricula);
                            printf("\nAs notas nas avaliacoes sao: %.1f %.1f %.1f\n", veriParciais1, veriParciais2, veriParciais3);
                            printf("\nA media dos exercicios eh: %.1f\n", exerc);
                            printf("\nA media de aproveitamento eh de: %.1f\n", aprovMedia);
                        }else{
                                if (aprovMedia < 4.0){
                                    printf("\nA O aluno com matricula %i esta reprovado com conceito E\n", matricula);
                                    printf("\nAs notas nas avaliacoes sao: %.1f %.1f %.1f\n", veriParciais1, veriParciais2, veriParciais3);
                                    printf("\nA media dos exercicios eh: %.1f\n", exerc);
                                    printf("\nA media de aproveitamento eh de: %.1f\n", aprovMedia);
                                }else{
                                        printf("\nNao foi possivel retornar o desempenho do aluno.\n");
                                }
                        }
                }
        }
}
}

