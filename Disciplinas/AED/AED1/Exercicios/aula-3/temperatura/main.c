//TRANSFORME CELSIUS EM FARENHEIT
#include <stdio.h>

int main(void) {

    float farenheit, celsius;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);

    farenheit = (celsius * 1.8) + 32;
    printf("%.1f °C = %.1f F\n", celsius, farenheit);

    return 0;
}