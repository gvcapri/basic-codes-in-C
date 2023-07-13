#include <stdio.h>
#include <math.h>

int main(){
int anos, meses, dias, idade1, idade2, idade3;

printf("qual sua idade: ");
scanf("%i", &anos);

printf("meses: ");
scanf("%i", &meses);

printf("dias: ");
scanf("%i", &dias);

idade1 = (anos*360);
idade2 = (meses*30);

idade3 = (idade1 + idade2 + dias);

printf("sua idade em dia: %i ", idade3);

return 0;
}

