//PAR OU ÍMPAR
#include <stdio.h>

int main(void) {

    int numero;
    
    printf("Descubra se o numero eh par ou impar\nInforme o numero: ");
    scanf("%d", &numero);

    if(numero % 2 != 0) printf("Impar\n");
    else printf("Par\n");

    return 0;
}