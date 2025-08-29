//PESO IDEAL MULHER
#include <stdio.h>

int main(void) {

    float altura, pesoIdeal;

    printf("Informe sua altura(m): ");
    scanf("%f", &altura);

    pesoIdeal = (62.1 * altura) - 44.7;

    printf("Seu peso ideal eh: %.1f\n", pesoIdeal);

    return 0;
}