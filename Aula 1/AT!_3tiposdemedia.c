#include <stdio.h>
int main(){
    float nota1, nota2, media1, nota3, nota4, media2, mediafinal;
    printf ("insira a nota da primeira unidade: \n", nota1);
    scanf("%f", &nota1);

    printf ("insira a nota dasegunda unidade: \n", nota2);
    scanf("%f", &nota2);

    printf ("insira a nota da terceira unidade: \n", nota3);
    scanf("%f", &nota3);

    printf ("insira a nota da quarta unidade: \n", nota4);
    scanf("%f", &nota4);


    media1 = (nota1 + nota2) /2;
    media2 = (nota3 + nota4) /2;
    mediafinal = (nota1 + nota2 + nota3 + nota4) /4;

    printf ("a sua media do primeoiro semestre foi %2.f: \n", media1);
    printf ("a sua media do segundo semestre foi %2.f: \n", media2);
    printf ("a sua media final foi %4.f: \n", mediafinal);

    return 0;
} 