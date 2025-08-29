//PESO IDEAL HOMEM
#include <stdio.h>

int main(void) {

    float altura, pesoIdeal;

    printf("Informe sua altura(m): ");
    scanf("%f", &altura);

    pesoIdeal = (72.7 * altura) - 58;

    printf("Seu peso ideal eh: %.1f\n", pesoIdeal);

    return 0;
}