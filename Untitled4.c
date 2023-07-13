#include <stdio.h>
#include <math.h>

int main(){
int num1, num2;

printf("escreva o primeiro numero : ");
scanf("%d", &num1);

printf("escreva o segundo numero: ");
scanf("%d", &num2);

if (num1>num2){
printf("o maior é: %d", num1);
}
else {
printf("o maior : %d", num2);
}
return 0;
}
