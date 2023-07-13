#include <stdio.h>

int main(){
int numero1, numero2, resultado,resto;

printf("escreva o primeiro numero: ");
scanf("%i", &numero1);

printf("escreva o segundo numero: ");
scanf("%i", &numero2);

resultado = (numero1/numero2);
resto = (numero1%numero2);

printf("o resultado e o resto sao respectivamente: %i e %i", resultado, resto);

return 0;
}
