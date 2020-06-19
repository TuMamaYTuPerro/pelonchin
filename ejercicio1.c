#include <stdio.h>

int main(void) {
    int entero;
    char caracter;
    float real;
    double real_doble_presicion;

    entero = 1;
    caracter = 'a';
    real = 3.1415;
    real_doble_presicion = 1234.24532565756452;

    prinf("Imprimiendo valor de entero: %d\n",entero);
    printf("Imprimiendo valor de caracter: %c\n",caracter);
    printf("Imprimiendo valor de real: %f\n",real);
    printf("Imprimiendo valor de presicion: %f\n",real_doble_presicion);

    return 0;
}