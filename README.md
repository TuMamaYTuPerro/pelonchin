# Primer repositorio del Pelonshito
Indice de contenidos:

- [Primer repositorio del Pelonshito](#primer-repositorio-del-pelonshito)
  - [Comentarios, Tipos de datos y Variables](#comentarios-tipos-de-datos-y-variables)
    - [Definicion de conceptos](#definicion-de-conceptos)
    - [Asignacion de ejercicio](#asignacion-de-ejercicio)
  - [Estructuras de control](#estructuras-de-control)
    - [Estructuras condicionales](#estructuras-condicionales)
      - [La estructura if](#la-estructura-if)
    - [Estructuras ciclicas](#estructuras-ciclicas)
      - [La estructura while](#la-estructura-while)
    - [Ejercicios sobre estructuras de control](#ejercicios-sobre-estructuras-de-control)
  - [Tipos de operadores](#tipos-de-operadores)
    - [Tabla de operadores](#tabla-de-operadores)
  - [Arreglos](#arreglos)
    - [Declaracion de arreglos](#declaracion-de-arreglos)
    - [Inicializacion de arreglos por listas de valores](#inicializacion-de-arreglos-por-listas-de-valores)
    - [Acceso a los valores de un arreglo](#acceso-a-los-valores-de-un-arreglo)
    - [Ejercicios sobre Arreglos](#ejercicios-sobre-arreglos)

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
- [x] Observar la estructura del programa descrito en el archivo ejercicio1.c y comprender la instanciacion de variables de los diferentes tipos asi como la forma en la que se imprimen.

---

## Estructuras de control
Las estructuras de control son, como su nombre lo dice, estructuras del lenguaje que permiten el control del flujo dentro de un programa, para este fin se han definido 2 tipos:

### Estructuras condicionales
Las estructuras condicionales permiten al programa tomar decisiones que afectan el flujo, en base a alguna condicion
#### La estructura if
La estructura _if_ permite la ejecucion de un bloque de codigo basada en la evaluacion de una condicion.
Si la evaluacion de la condicion arroja un valor _true_ el bloque de codigo se ejecuta, de otra forma el bloque de codigo dentro de la estructura _if_ es ignorado y el flujo del programa continua.  
```c
if(condicion1) {
  // Bloque de codigo a ejecutar cuando la condicion se cumple
}
```  
Es posible encontrarse tambien con otras condiciones anidadas dentro del bloque de ejecución de un _if_ se ven de la siguiente forma:  
```c
if(condicion1) {
  // Bloque de codigo a ejecutar si la primera condicion se cumple
  if(condicion2) {
    // Bloque de codigo a ejecutar cuando ambas condiciones se cumplen
  }
  // Continuacion de la ejecucion del bloque para condicion1
}
```  

### Estructuras ciclicas
Las estructuras ciclicas permiten al programa ejecutar bloques de codigo de forma repetitiva, por medio de una evaluacion regularmente llamada _condicion de parada_.
#### La estructura while
La estructura _while_ permite la ejecucion de un bloque de codigo de manera iterativa. Se usa generalmente cuando el numero de iteraciones que se realizara no es conocido o no es importante. Por ejemplo cuando se tiene una lista de objetos sobre la que se desea realizar alguna accion.
```c
while(condicion1) {
  // Bloque de codigo a ejecutar cuando la condicion se cumple
}
```  
Es posible encontrarse tambien con otras condiciones anidadas dentro del bloque de ejecución de un _while_ se ven de la siguiente forma:  
```c
while(condicion1) {
  // Bloque de codigo a ejecutar si la primera condicion se cumple
  while(condicion2) {
    // Bloque de codigo a ejecutar cuando ambas condiciones se cumplen
  }
  // Continuacion de la ejecucion del bloque para condicion1
}
```  

### Ejercicios sobre estructuras de control
- [x] Generar programa contador de lineas (ejercicio2CuentaLineas.c)
- [x] Generar programa contador de palabras (ejercicio3CuentaPalabras.c)
- [ ] Generar programa que elimine los espacios y saltos de linea excedentes de la entrada (ejercicio4Trim.c)

---

## Tipos de operadores 
Un operador es un simbolo o conjunto de simbolos que se encargan de indicarle al compilador que se ejecutara alguna operacion especifica.
Los operadores se pueden clasificar de diferentes formas, ya sea por el numero de operandos que reciben o por el tipo de operaciones que realizan.

### Tabla de operadores
A continuacion se presenta una tabla con los operadores conocidos y sus descripciones.
| Operador | Tipo de Operando |Tipo de Operacion | Descripcion | Ejemplo |
| --- | --- | --- | --- | --- |
| = | Binario | Asignacion | Operador de asignacion simple | `variable = 1` |
| + | Binario | Aritmetica | Operador de suma aritmetica | `2 + 2` |
| - | Binario | Aritmetica | Operador de resta aritmetica | `2 - 2` |
| * | Binario | Aritmetica | Operador de multiplicacion | `2 * 2` |
| / | Binario | Aritmetica | Operador de division | `2 / 2` |
| == | Binario | Logica | Operador de igualdad logico | `1 == 1` |
| && | Binario | Logica | Operador _AND_ logico | `condicion1 && condicion2` |
| \|\| | Binario | Logica | Operador _OR_ logico | `condicion1 || condicion2` |

---

## Arreglos
Un arreglo se define como un conjunto de variables que tienen un mismo nombre y que se accesan por medio de un indice.
Es posible declarar arreglos de cualquier tipo de dato, es necesario definir un tamaño el cual se mantendra fijo por el tiempo de vida de la variable.

### Declaracion de arreglos
A continuacion se ejemplifica la declaracion de arreglos para cada uno de los tipos de datos conocidos:
```c
// Declaracion de arreglo de 10 enteros llamado arregloDeEnteros
int arregloDeEnteros[10];
// Declaracion de arreglo de 10 caracters llamado arregloDeCaracteres
char arregloDeCaracteres[10];
// Declaracion de arreglo de 10 numeros con punto flotante llamado arregloDePresicion
float arregloDePresicion[10];
// Declaracion de arreglo de 10 numeros de doble presicion llamado arregloDeDoblePresicion
double arregloDeDoblePresicion[10];
```

### Inicializacion de arreglos por listas de valores
Lenguaje C provee maneras de inicializar arreglos por medio de listas de valores de la siguiente forma:
```c
// Lista de valores de arreglo de enteros separada por ,
int arregloDeEnteros[] = {1,2,3,4,5,6,7,8,9,10};
// Lista de valores de arreglo de caracteres separada por ,
char arregloDeCaracteres[] = {'a','b','c','d','e','f','g','h','i','j'};
// Los arreglos de caracteres tambien pueden ser declarados de la siguiente forma:
char arregloDeCaracteres[] = {"abcdefghij"};
// Lista de valores de arreglo de numeros con punto flotante separada por ,
float arregloDePresicion[] = {1.7,2.01,3.02,4.6,5.03,6.06,7.3,8.03,9.02,10.1};
// Lista de valores de arreglo de numeros de doble presicion separada por ,
double arregloDeDoblePresicion[] = {1.7,2.01,3.02,4.6,5.03,6.06,7.3,8.03,9.02,10.1};
```
Se puede notar que al realizar la inicializacion de valores por medio de una lista no es necesario definir el tamaño del arreglo ya que este es determinado por el numero de elementos en la lista.

### Acceso a los valores de un arreglo
Los valores de los elementos de un arreglo se accesan por medio de un indice, los indices de todo arreglo inician desde 0, como se puede observar en el siguiente ejemplo:

```c
// Un arreglo de 10 enteros inicializado por medio de una lista
int arregloDeEnteros[10] = {1,2,3,4,5,6,7,8,9,10};

// Para el acceso a los valores del arreglo se usa el indice que indica el numero de elemento dentro del arreglo.
// El valor de la variable sera 1
int variable = arregloDeEnteros[0];
// El valor de la variable sera 2
int variable = arregloDeEnteros[1];
// El valor de la variable sera 3
int variable = arregloDeEnteros[2];
// El valor de la variable sera 4
int variable = arregloDeEnteros[3];
// El valor de la variable sera 5
int variable = arregloDeEnteros[4];
// El valor de la variable sera 6
int variable = arregloDeEnteros[5];
// El valor de la variable sera 7
int variable = arregloDeEnteros[6];
// El valor de la variable sera 8
int variable = arregloDeEnteros[7];
// El valor de la variable sera 9
int variable = arregloDeEnteros[8];
// El valor de la variable sera 10
int variable = arregloDeEnteros[9];
```

### Ejercicios sobre Arreglos
- [ ] Observe y comprenda la estructura del programa ejemploArreglos1.c que se encuentra sobre la carpeta examples.