#include <stdio.h>

int main(){
int numero1, numero2, numero3, soma;

printf("escolha o valor de A: ");
scanf("%i", &numero1);

printf("escolha o valor de B: ");
scanf("%i", &numero2);

printf("escolha o valor de C: ");
scanf("%i", &numero3);

soma = (numero2+numero3);

if (soma<numero1)
printf("a soma de B+C= %i e eh menor que A= %i", soma, numero1);
else if (soma>numero1)
printf("a soma de B+C= %i e eh maior que A= %i", soma, numero1);

return 0;
}
