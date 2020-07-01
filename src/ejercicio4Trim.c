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
    // Variable bandera para vigilar la aparicion del a primera palabra en la linea
    int primeraPalabra = 0;

    while ((caracter = getchar()) != EOF) {
        if (caracter != SPACE) {
            // Si hay un espacio previo y ya aparecio la primera palabra en la linea
            if (espacioPrevio == SPACE && primeraPalabra == 1) {
                putchar(espacioPrevio);
                espacioPrevio = 0;
            }
            putchar(caracter);
            // Ya aparecio una palabra
            primeraPalabra = 1;
        }

        // Si el caracter llegado es un espacio y ya llego la primera palabra
        if (caracter == SPACE && primeraPalabra == 1) {
            espacioPrevio = SPACE;
        }

        // Si el caracter llegado es el final de la linea
        if(caracter == LINE_FEED) {
            // Cambia el valor de la bandera para indicar que 
            // no han llegado palabras a la siguiente linea de la entrada
            primeraPalabra = 0;
        }

    }

    return 0;
}
