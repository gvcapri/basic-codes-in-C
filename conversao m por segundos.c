#include <stdio.h>
#include <math.h>

int main(){
int velocidade1, velocidade2;

printf("escreva uma velocidade: ");
scanf("%i", &velocidade1);

velocidade2 = (velocidade1*3.6);

printf("a velocidade em km: %i", velocidade2);

return 0;
}
