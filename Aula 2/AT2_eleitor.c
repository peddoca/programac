#include <stdio.h>
int main() {
int eleitor;
printf("Digite o Numero do seu eleitor");
scanf("%d", &eleitor);

switch (eleitor)
{

case 1111:
    printf("Zé do pão");
    break;

case 2222:
    printf("ze Piqueno");
    break;

case 3333:
    printf("Cezar");
    break;

case 4444:

    printf("Dona Lurde");
    break;

case 5555:

    printf("Alan Manga Verde");

    break;

default:
    printf("opçao invalida");
    break;
}

return 0;
}