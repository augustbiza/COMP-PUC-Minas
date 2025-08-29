//MAIOR ENTRE DOIS NÚMEROS
//UTILIZE MODULARIZAÇÃO E ALOCAÇÃO DINÂNMICA DE MEMÓRIA
#include <stdio.h>
#include <stdlib.h>

float *leiaNumero(void) {
    float *num = (float*)malloc(sizeof(float));
    printf("Informe um valor: ");
    scanf("%f", num);

    return num;
}

float *descubraMaior(int num1, int num2) {
    float *maior = (float*)malloc(sizeof(float));
    *maior = num1;

    if(num2 > num1) *maior = num2;


    return maior;
}

int main(void) {

    float *maior;

    float *num1 = leiaNumero(), *num2 = leiaNumero();

    maior = descubraMaior(*num1, *num2);

    printf("Maior: %.2f\n", *maior);

    free(num1);
    free(num2);
    free(maior);

    return 0;
}