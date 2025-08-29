//ORDEM DECRESCENTE DE 'n' ATÉ 0
//RECURSIVO
#include <stdio.h>

void recDescente(int n){

    if(n >= 0) {
        printf("%d ", n);
        recDescente(n-1);
    }    
}

int main(void) {

    int n;
    printf("Ordem Decrescente.\nValor de 'n': ");
    scanf("%d", &n);

    recDescente(n);

    return 0;
}