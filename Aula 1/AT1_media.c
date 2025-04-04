#include <stdio.h> 
int main(){
    float num1, num2, media;

    printf("digite a primeira nota: \n", num1);
    scanf("%f", &num1);

    printf("digite a segunda nota: \n", num2);
    scanf("%f", &num2);

    media = (num1 + num2) / 2;

    printf("a sua media foi: %2.f\n", media);

    return 0;
}