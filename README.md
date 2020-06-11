# Primer repositorio del Pelonshito
Hola
- [Primer repositorio del Pelonshito](#primer-repositorio-del-pelonshito)
  - [Comentarios, Tipos de datos y Variables](#comentarios-tipos-de-datos-y-variables)
    - [Definicion de conceptos](#definicion-de-conceptos)
    - [Asignacion de ejercicio](#asignacion-de-ejercicio)

---

## Comentarios, Tipos de datos y Variables

### Definicion de conceptos
- **Comentario:** Parte del codigo que se usa para realizar una descripcion o dejear un mensaje al lector.
  Existen 2 tipos de comentarios:
  1. Sobre una linea:
        ```c
        //Este es un comentario de una linea
        int main(void) {
            return 0;
        }
        ```
  1.  Multilinea:
        ```c
        /* 
        *  Este es
        *  un comentario
        *  multilinea
        */
        int main(void) {
            return 0;
        }
        ```
- **Variable:** Se refiere a un valor que puede cambiar en funcion de la informacion llegada al programa o a las condiciones de ejecucion.
- **Tipos de datos:** Se trata de una clasificacion de datos que se usa para indicarle al compilador la forma en la que pretendemos usar los datos almacenados en las variables. En lenguaje C se tienen los siguientes tipos de datos primitivos:
  |Identificador Tipo de dato|Espacio de Almacenamiento|Rango de valores|Ejemplo de asignacion|
  | --- | --- | --- | --- |
  | **char** | 1 byte | -128 a 127 | `char caracter = 'a'`|
  | **int** | 4 bytes | -2,147,483,648 a 2,147,483,647 | `int entero = 123`|
  | **float** | 4 bytes | 1.2E-38 to 3.4E+38 hasta 6 decimales | `float presicion = 123.123`|
  | **double** | 8 bytes | 2.3E-308 to 1.7E+308  hasta 15 decimales| `double presicion_doble = 1234.1235122`|

### Asignacion de ejercicio
Observar la estructura del programa descrito en el archivo ejercicio1.c y comprender la instanciacion de variables de los diferentes tipos asi como la forma en la que se imprimen.
