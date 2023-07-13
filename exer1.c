#include <stdio.h>
#include <math.h> 

int main(){
float raio, area;

printf("digite o valor do raio: ");
scanf("%f", &raio);

if(raio>0){
area = 3.14*raio*raio;
printf("A area eh: %.2f", area);
}
else{
printf("o raio nao eh positivo: ");
}
return 0;
}
