#include <stdio.h>

int main (){

int num_pares = 0, num_impares = 0, i=1;

while(i <= 100){
    if(i%2 != 0){
        num_impares = num_impares + i;
    }else{
        num_pares = num_pares + i;
    }i++;
}

printf("A soma dos numeros pares eh: %i\n", num_pares);
printf("A soma dos numeros impares eh: %i\n", num_impares);

return 0;
}
