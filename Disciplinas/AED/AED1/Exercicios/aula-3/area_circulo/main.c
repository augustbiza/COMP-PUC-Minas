//TRANSFORME CELSIUS EM FARENHEIT
#include <stdio.h>

int main(void) {

    float raio, areaCirculo;
    scanf("%f", &raio);

    areaCirculo = 3.14159 * raio * raio;
    printf("Raio: %.2f\nArea: %.2f\n", raio, areaCirculo);

    return 0;
}