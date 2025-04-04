#include <stdio.h>
int main(){
float ph;
printf("digite o ph da agua\n");
scanf("%f", &ph);

if(ph >= 6.5 && ph <= 7.5)
{
    printf(" (bom)\n", ph);

}

else { 
    if ((ph >= 6 && ph <= 6.5 ) || (ph >= 7.5 && ph <= 8.5 ))
    {
        printf("razoavel", ph);
    }
else

    printf("ruim", ph);

}

return 0;
}