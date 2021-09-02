#include <stdio.h>

int main() {

int qntNumeros, i, j, comp, conta, vezes;
float sequencia[100];

printf ("\t---Contador de numeros da sequencia---\n\n");

printf("\nDigite o numero de elementos da sequencia: ");
scanf("%d", &qntNumeros);

printf("Digite uma sequencia de %d numeros reais: ", qntNumeros);
    for (i = 0; i < qntNumeros; i++){
        scanf("%f", &sequencia[i]);
    }

  for (i = 0; i < qntNumeros; i++) {
    vezes = 1;
    j = i + 1;
    while (j < qntNumeros)
      if (sequencia[j] != sequencia[i])
        j++;
      else{
        vezes++;
        qntNumeros--;
        sequencia[j] = sequencia[qntNumeros];
      }
    printf("%.1f ocorre %i vezes\n", sequencia[i], vezes);
  }
  return 0;
}
