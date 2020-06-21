/**
 * @author Francisco Bautista (BAJJ)
 * @email jbautista@ext.vectoritcgroup.com
 * @create date 2020-06-21 10:13:14
 * @modify date 2020-06-21 10:13:14
 * @desc Programa que expone la forma de declarar arreglos inicializar 
 * su valor por medio del indice y posteriormente imprimirlos en la salida
 */

#include <stdio.h>

// Constante que define el tamaño del arreglo
#define ARRAY_LEN   10

int main(void) {
    // Se declara un arreglo
    int arreglo[ARRAY_LEN];
    // Variable que controla la posicion del indice sobre el arreglo debe iniciar en 0
    int idx = 0;

    // Inicia ciclo para iterar sobre los mientros del arreglo
    while(idx < ARRAY_LEN) {
        // Define el valor de la variable apuntada por indice a (indice+1)*5 (Tabla del 5 XD)
        arreglo[idx] = (idx+1)*5;
        // Imprime los valores del arreglo en formato de la tabla del 5
        printf("5 X %d = %d\n",(idx+1),arreglo[idx]);
        // Aumenta el valor del indice para evitar provocar un loop infinito
        idx = idx+1;
    }

    // Termina la ejecucion del programa con normalidad
    return 0;
}