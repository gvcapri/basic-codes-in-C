#include <stdio.h>
#include <math.h>

int main(){
float precoFinal, lucro, imposto, custoProducao;

printf("qual o custo de producao: ");
scanf("%f", &custoProducao);

lucro = (custoProducao*0.45);
imposto = (custoProducao*0.20);

precoFinal= (custoProducao + lucro + imposto);

printf("o preco final vai ser: %f", precoFinal);

return 0;
}
