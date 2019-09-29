#include <stdio.h>
#include <stdlib.h>

int main(){

int i=1, positivo = 0;
float n, soma=0;

for (i; i<=6; i++){
printf("Valor: "); scanf("%f", &n);
if(n > 0){
positivo ++;
soma = (n + soma);
}
}
soma = soma/positivo;
printf("%d valores positivos\n", positivo);
printf("soma: %.2f\n", soma);
return 0;
}
