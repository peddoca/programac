#include <stdio.h>
int main (){
int nota1;

printf("insira sua nota", nota1);
scanf("%d", &nota1);

if (nota1 <= 4)
{
    printf("sua nota e pessima");
}
else if (nota1 > 4 && nota1 < 6)
{
    printf("sua nota é aceitavel");
}
else if (nota1 >= 7 && nota1 < 9)
{
    printf("sua nota esta otima");
}

else
printf("sua nota e exelente");

return 0;
}