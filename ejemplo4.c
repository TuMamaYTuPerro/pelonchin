/**
 * @author Francisco Bautista (BAJJ)
 * @email jbautista@ext.vectoritcgroup.com
 * @create date 2020-06-16 18:56:02
 * @modify date 2020-06-16 18:56:02
 * @desc Proceso que recibe valores de la entrada y los imprime en la salida estandar
 */

#include <stdio.h>

int main(void) {
    // Variable para almacenar el valor del caracter leido de la entrada
    int caracter;

    // Si el caracter leido de la entrada es diferente a Fin de archivo
    while ((caracter = getchar()) != EOF) {
        // Imprimelo en la salida estandar
        putchar(caracter);
        if(caracter == 'a') {
            printf("\nEs una a\n");
        }
    }

    return 0;
}