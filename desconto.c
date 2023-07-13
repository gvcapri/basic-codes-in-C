#include <stdio.h>
#include <math.h>

int  main(){
float precoFinal, preco, desconto;

printf("valor do produto: ");
scanf("%f", &preco);

desconto = (preco*0.05);
precoFinal = (preco+desconto);

printf("%f", precoFinal);

return 0;
}
