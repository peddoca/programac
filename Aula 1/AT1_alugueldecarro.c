#include <stdio.h>
int main (){

    printf("o valor do aluguel e de 200,00 o dia:\n");
  float valordocarro = 200.00;
  int dias;
  int valor_alugado;
    
  printf("informe os dias que deseja alugar:", dias);
  scanf("%d", &dias);

valor_alugado = valordocarro * dias;

printf("o valor do aluguel foi de: %d", valor_alugado);

    return 0;

}