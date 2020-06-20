/**
 * @author Francisco Bautista (BAJJ)
 * @email jbautista@ext.vectoritcgroup.com
 * @create date 2020-06-16 19:44:41
 * @modify date 2020-06-16 19:44:41
 * @desc Generar un programa que se encargue de recibir los caracteres de la entrada estandar
 * Los imprima en la salida e imprima el conteo de lineas vistas hasta el momento en la entrada.
 */

#include <stdio.h>

int main (void) {
    char caracter;
    int lineCounter = 0;

    while ((caracter = getchar()) != EOF) {
        putchar(caracter);

        if(caracter == '\n') {
            lineCounter = lineCounter+1;
            printf("Imprimiendo contador de linea%d\n",lineCounter);
        }
    }

return 0;
}