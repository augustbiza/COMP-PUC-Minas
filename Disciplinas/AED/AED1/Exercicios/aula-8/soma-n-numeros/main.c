//SOMA DE 'n' VALORES LIDOS
#include <stdio.h>

int main(void) {

    printf("Soma de 'n' valores.\n");

    int n;
    printf("Valor de 'n': ");
    scanf("%d", &n);

    float num, soma = 0;

    for(int i = 0; i < n; i++) {
        printf("Numero %d: ", i+1);
        scanf("%f", &num);

        soma += num;
    }

    printf("Soma = %.2f\n", soma);

    return 0;

}