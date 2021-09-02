#include <stdio.h>

int main (){

int cont, num1 = 8, num2;

num2 = num1 + 2;

printf("\nDigite um numero referencial:\n");
scanf("%i", &cont);

while (num1 <= (cont-1)){
   num2 = num1 + 2;
   printf("%i ", num1);
   printf("%i ", num2);
   num1 = num1 * 2;
}
return 0;

}
