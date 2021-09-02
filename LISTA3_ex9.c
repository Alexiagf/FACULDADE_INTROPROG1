#include <stdio.h>

int main (){

int tempot = 0;
float massai;

printf("Insira a massa inicial:");
scanf("%f", &massai);

while (massai >= 0.5){
        massai = (massai / 2.0);
        tempot += 50;

}
printf("O tempo total para a massa ser inferior a 0,5 gramas eh:%i segundos\n", tempot);

return 0;
}
