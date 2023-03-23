/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// CORTO_03 - Ejercicio 5
// Autor: Gabriel Carrera

#include <stdio.h>

#define N 15 // se define el tamaño deseado para el array

int main() {
    int array[N]; // array de tamaño N, pero empieza en 0 asi que pide posiciones de 0 a 14
    int *p = array; // establecemos un puntero para el array, que apunte al primer elemento

    // llenado del array solicitando valores para cada posicion del array con un for
    for (int i = 0; i < N; i++) {
        printf("Ingrese un número entero para guardar en la posición %d: ", i); // solicitar un valor para cada posicion
        scanf("%d", &array[i]); // ingresar el valor ingresado a cada posicion del array
    }

    // recorrer el array con el puntero y mostrar el valor del numero en cada posicion multiplicado por 2
    printf("El valor de cada número ingresado multiplicado por 2 es: \n");
    for (int i = 0; i < N; i++) {
        printf("Posición %d: %d\n", i, (*p) * 2);
        p++; // incrementar de 1 en 1 el puntero para que recorra el array completo
    }

    return 0;
}