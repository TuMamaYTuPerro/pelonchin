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


int main(void) {
    char caracter;
    char espacioPrevio = 0;

    while ((caracter = getchar()) != EOF) {
        if (caracter != SPACE) {
            if (espacioPrevio = SPACE) {
                putchar(espacioPrevio);
                espacioPrevio = 0;
            }
            putchar(caracter);
        }
        
        if (caracter == SPACE) {
            espacioPrevio = SPACE;
        }


    }


return 0;

}