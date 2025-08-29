//POTENCIAÇÃO + REJEITAR LEITURA DE VALORES INVÁLIDOS (do-while)
// base real, expoente inteiro não negativo
#include <stdio.h>
#include <stdbool.h>

int main(void) {

    printf("Calculo de potencia.\n");

    int expoente;
    float base;
    bool erro;

    printf("Valor da base: ");
    scanf("%f", &base);

    do{

        printf("Valor do expoente: ");
        scanf("%d", &expoente);

        erro = expoente < 0;

        if(erro) printf("O expoente deve ter valor nao negativo!\n\n");

    }while(erro);

    float potencia = 1;

    int i = 1;
    while(i <= expoente) {
        potencia *= base;

        i++;
    }

    printf("%.2f ^ %d = %.2f\n", base, expoente, potencia);

    return 0;
}