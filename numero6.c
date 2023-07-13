#include <stdio.h>
#include <math.h>

int main(){
float preco, desconto, desconto2, desconto3, total, total2, total3;
int pagamento;

printf("qual o valor do vestuario: ");
scanf("%f", &preco);

printf("qual o tipo de pagamento: ");
printf("digite:\n 1 para pix \n 2 para cartao de debito \n 3 para a vista no credito \n 4 para parcelar no credito \n");
scanf("%i", &pagamento);

if(pagamento == 1){
desconto = (preco*10/100);
total = (preco-desconto);
printf("o valor total sera: %2.f", total);
}
else if (pagamento == 2){
desconto2 = (preco*5/100);
total2 = (preco-desconto2);
printf("o valor total sera: %2.f", total2);
}
else if (pagamento == 3){
desconto3 = (preco*2/100);
total3= (preco-desconto3);
printf("o valor total sera: %2.f", total3);
}
else if (pagamento == 4){
printf("o valor total sera: %2.f", preco);
}
return 0;
}
