#include <stdio.h>
#include <math.h>

int main(){
int idade1, dias, meses, anos, idade2, idade3, idade4;

printf("escreva sua idade em dias: ");
scanf("%d", &idade1);

anos = (idade1/360);
meses = (idade1%360)/30;
dias =  (idade1%360)%30;
idade2 = (anos);
idade3 = (meses);
idade4 = (dias);
printf("sua idade em anos meses e dias: %i anos %i meses %i e dias", idade2, idade3, idade4);

return 0;
}
