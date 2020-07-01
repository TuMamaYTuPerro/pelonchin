/**
 * @author Francisco Bautista (BAJJ)
 * @email jbautista@ext.vectoritcgroup.com
 * @create date 2020-06-20 15:41:47
 * @modify date 2020-06-20 15:41:47
 * @desc Generar un programa que se encargue de eliminar los espacios excedentes 
 * entre las palabras de la entrada estandar e imprima cada una de las palabras 
 * con solo un espacio de separacion. Ejemplo de entrada:
 * hola              como                 estas?
 * Ejemplo de salida:
 * hola como estas?
 */
#include <stdio.h>

#define SPACE ' '
#define LINE_FEED '\n'

int main(void) {
    char caracter;
    char espacioPrevio = 0;
    int primeraPalabra = 0;

    while ((caracter = getchar()) != EOF) {
        if (caracter != SPACE) {
            if (espacioPrevio == SPACE && primeraPalabra == 1) {
                putchar(espacioPrevio);
                espacioPrevio = 0;
            }
            putchar(caracter);
            primeraPalabra = 1;
        }

        if (caracter == SPACE && primeraPalabra == 1) {
            espacioPrevio = SPACE;
        }

        if(caracter == LINE_FEED) {
            primeraPalabra = 0;
        }

    }

    return 0;
}
