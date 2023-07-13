#include <stdio.h>
#include <math.h>

int main(){
float peso, altura, Imc;

printf("escreva o peso: ");
scanf("%f", &peso);

printf("escreva a altura: ");
scanf("%f", &altura);

Imc = peso/pow(altura,2);

printf("seu imc é: %f" , Imc);

return 0;
}
