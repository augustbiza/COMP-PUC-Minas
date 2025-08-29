//ORDENAR CRESCENTE 3 NÚMEROS
//UTILIZE MODULARIZAÇÃO E ALOCAÇÃO DINÂNMICA DE MEMÓRIA
#include <stdio.h>
#include <stdlib.h>

float *leiaNumero(void) {
    float *num = (float*)malloc(sizeof(float));
    printf("Informe um valor: ");
    scanf("%f", num);

    return num;
}

void *ordemCrescente(int a, int b, int c) {
    float *maior = (float*)malloc(sizeof(float)), *meio = (float*)malloc(sizeof(float)), *menor = (float*)malloc(sizeof(float));

    if(a > b && a > c) {
        *maior = a;
        if(b > c) {
            *meio = b;
            *menor = c;
        }
    }
    else if(b > a && b > c) {
        *maior = b;
        if(a > c) {
            *meio = a;
            *menor = c;
        }
    }

    else if(c > a && c > b) {
        *maior = c;
        if(a > b) {
            *meio = a;
            *menor = b;
        }
    }

    printf("Ordem crescente: %.2f, %.2f, %.2f\n", *maior, *meio, *menor);
}


int main(void) {

    float *a = leiaNumero(), *b = leiaNumero(), *c = leiaNumero();

    ordemCrescente(*a, *b, *c);

    free(a);
    free(b);
    free(c);

    return 0;
}