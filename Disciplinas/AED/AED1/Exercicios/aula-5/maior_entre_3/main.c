//MAIOR ENTRE TRÊS NÚMEROS
#include <stdio.h>

int main(void) {

    int num1, num2, num3, maior;
    printf("Descubra o maior entre tres numeros.\nInforme os tres numeros:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    maior = num1;

    if(num2 > maior && num2 > num3) maior = num2;
    else if(num3 > maior && num3 > num2) maior = num3;

    printf("Maior: %d\n", maior);

    return 0;
}