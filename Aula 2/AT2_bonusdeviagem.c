#include <stdio.h>
int main(){

printf("A cima de duas passagens a um bonus especial:\n");

int passagens; 
printf("quantas passagens foram compradas?:\n", passagens);
scanf("%d", &passagens);

    if(passagens == 3) {
        printf("voce tera um desconto de 5% ");
        
    }
     else if (passagens == 4)
    {
        printf("voce tera um desconto de 10%");
    }
    else if (passagens == 5)
    {
        printf("voce tera um desconto de 20%");
    }
    else if (passagens >= 6) {
        printf("voce esta no nosso grupo vip e tera um desconto de 30%");
    }
    else 
    printf("voce nao possui nenhum bonus");

    return 0;
}