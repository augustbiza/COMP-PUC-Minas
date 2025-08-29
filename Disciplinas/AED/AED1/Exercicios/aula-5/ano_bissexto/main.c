//ANO BISSEXTO
#include <stdio.h>

int main(void) {

    int ano;

    printf("Descubra se o ano eh bissexto.\nInforme o ano: ");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        printf("Ano Bissexto.\n");

    else printf("Nao eh bissexto.\n");

    return 0;
}