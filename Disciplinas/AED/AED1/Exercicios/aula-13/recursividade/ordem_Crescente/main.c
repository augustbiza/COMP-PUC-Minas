//ORDEM CRESCENTE DE 0 ATÉ 'n'
//RECURSIVO
#include <stdio.h>

void recCrescente(int n, int x){
    if(x <= n) {
        printf("%d ", x);
        recCrescente(n, x+1);
    }   
}

int main(void) {

    int n, x = 0;
    printf("Ordem Crescente.\nValor de 'n': ");
    scanf("%d", &n);

    recCrescente(n, x);

    return 0;
}