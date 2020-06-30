/**
 * @author Francisco Bautista (BAJJ)
 * @email jbautista@ext.vectoritcgroup.com
 * @create date 2020-06-16 20:41:44
 * @modify date 2020-06-16 20:41:44
 * @desc Generar un programa que imprima la cuenta total de palabras vistas en la entrada estandar
 */
#include <stdio.h>

#define LINE_FEED   '\n'
#define SPACE       ' '

/**
 * @brief Programa que lee caracteres de la entrada y realiza una cuenta de las palabras que imprime a la salida estandar por cada palabra vista 
 * @todo eliminar la cuenta de palabras cuando el caracter anterior es un espacio y el caracter es un salto de linea 
 * @return int 
 */
int main(void) {
    char caracter;
    char caracterPrevio = LINE_FEED;
    int wordCounter = 0;

    while ((caracter = getchar()) != EOF) {
        // putchar(caracter);
        if((caracter == LINE_FEED) || (caracter == SPACE)) {
            if((caracter != LINE_FEED) && (caracterPrevio != SPACE) || (caracterPrevio != SPACE)) {                   
                wordCounter = wordCounter+1;
                printf("Nueva cuenta de palabras [%d]\n",wordCounter);
            } 
        }
        caracterPrevio = caracter;
    }

    return 0;
}