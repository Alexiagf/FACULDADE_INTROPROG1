#include <stdio.h>

int main (){

char opcao;
float ladoQ, areaQ, baseT, alturaT, areaT, baseR, alturaR, areaR;

printf("Insira uma opcao:\nT para area do triangulo\nQ para area do quadrado\nR para area do retangulo\nZ para finalizar a execucao");
scanf("%c", &opcao);

switch (opcao) {
case 't':
  printf("Insira o valor da altura do triangulo:");
  scanf("%f", &alturaT);
  printf("Insira o valor da base do triangulo:");
  scanf("%f", &baseT);
  areaT = ((alturaT * baseT)/2.0);
  printf("A area do triangulo eh: %.1f", areaT);
  break;

case 'T':
  printf("Insira o valor da altura do triangulo:");
  scanf("%f", &alturaT);
  printf("Insira o valor da base do triangulo:");
  scanf("%f", &baseT);
  areaT = ((alturaT * baseT)/2.0);
  printf("A area do triangulo eh: %.1f", areaT);
  break;

case 'q':
  printf("Insira o valor do lado do quadrado:");
  scanf("%f", &ladoQ);
  areaQ = (ladoQ * ladoQ);
  printf("A area do quadrado eh: %.1f", areaQ);
  break;

case 'Q':
 printf("Insira o valor do lado do quadrado:");
 scanf("%f", &ladoQ);
 areaQ = (ladoQ * ladoQ);
 printf("A area do quadrado eh: %.1f", areaQ);
  break;

case 'r':
  printf("Insira o valor da base do retangulo:");
  scanf("%f", &baseR);
  printf("Insira o valor da altura do retangulo:");
  scanf("%f", &alturaR);
  areaR = (baseR * alturaR);
  printf("A area do triangulo eh: %.1f", areaR);
  break;

case 'R':
  printf("Insira o valor da base do retangulo:");
  scanf("%f", &baseR);
  printf("Insira o valor da altura do retangulo:");
  scanf("%f", &alturaR);
  areaR = (baseR * alturaR);
  printf("A area do triangulo eh: %.1f", areaR);
  break;

case 'z':
  exit(0);
  break;

case 'Z':
  exit(0);
  break;

default:
 printf("\nA opcao selecionada nao eh valida.");
}
}
