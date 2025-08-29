//MEDIA DE 'n' VALORES LIDOS
#include <stdio.h>

int main(void) {

    printf("Media de 'n' valores.\n");

    int n;
    printf("Valor de 'n': ");
    scanf("%d", &n);

    float num, soma = 0, media;

    for(int i = 0; i < n; i++) {

        printf("Valor de %d: ", i+1);
        scanf("%f", &num);

        soma += num;
    }

    media = soma/n;

    printf("Media = %.2f\n", media);

    return 0;
}