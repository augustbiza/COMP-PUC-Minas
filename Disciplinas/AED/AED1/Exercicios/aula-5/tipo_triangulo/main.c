//VERIFIQUE SE OS LADOS FORMAM UM TRIÂNGULO E IDENTIFIQUE O TIPO
#include <stdio.h>
#include <stdbool.h>

int main(void) {

    float lado1, lado2, lado3;
    bool desigualdadeTriangular = false;

    printf("Informe a medida de tres lados:\n");
    scanf("%f%f%f", &lado1, &lado2, &lado3);

    if(lado1 < lado2+lado3 && lado2 < lado1+lado3 && lado3 < lado1+lado2) desigualdadeTriangular = true;

    if(desigualdadeTriangular) {
        
        if(lado1 == lado2 && lado1 == lado3) printf("Triangulo EQUILATERO.\n");
        else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) printf("Triangulo ISOSCELES.\n");
        else printf("Triangulo ESCALENO.\n");

    }

    else printf("Os lados fornecidos nao formam triangulo.\n");

    return 0;
}