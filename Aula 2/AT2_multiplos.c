#include<stdio.h>
int main (){
int numero;
printf("digite um numero");
scanf("%d", &numero);

for (int i = 1; i <= 10; i++)
{
    printf("os multiplos de %d sao iguais a %d\n", numero, numero * i);
}

return 0;

}