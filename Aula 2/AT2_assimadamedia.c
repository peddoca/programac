#include <stdio.h>
int main (){
float nota1, nota2, media;

printf("insira sua primeira nota", nota1);
scanf("%f", &nota1);

printf("insira sua segunda nota", nota2);
scanf("%f", &nota2);

media = (nota1 + nota2) /2;
printf("a media foi:\n%2.f", media);

if (media <=4)
{
    printf("voce esta abaixo da media");
}
else if (media > 4 && media <8 )
{
    printf("voce esta na media");
}
else
printf("voce esta assima da meddia");

return 0;
}