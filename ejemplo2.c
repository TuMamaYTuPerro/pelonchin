/**
 * @author Francisco Bautista (BAJJ)
 * @email jbautista@ext.vectoritcgroup.com
 * @create date 2020-06-16 18:11:08
 * @modify date 2020-06-16 18:11:08
 * @desc Descripcion del funcionamiento de ciclo while
 */
#include <stdio.h>

// Definicion de funcion principal
int main(void) {
    // Declaracion de variables
    float fahrenheit = 32.00;
    float celcius;
    int limiteSuperior = 100;

    while(celcius <= limiteSuperior) {
        // Inicia la impresion de tabla de una manera muy poco eficiente
        celcius = (fahrenheit - 32.00) * (5.00/9.00);
        printf("%f grados Fahrenheit = %f grados Celcius\n",fahrenheit,celcius);
        fahrenheit = fahrenheit+5.00;
    }

    return 0;
}
