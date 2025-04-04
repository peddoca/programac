#include <stdio.h>
int main(){

int numero = 0 ;

printf("digite um numero:\n");
scanf("%d", &numero);

printf("o numero escolhio foi %d: \n", numero);
printf("o antecessor do seu numero e %d: \n", numero - 1);
printf("o sucessor do seu numero e %d: \n", numero + 1);

return 0;}