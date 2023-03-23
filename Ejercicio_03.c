/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// CORTO_03 - Ejercicio 3
// Autor: Gabriel Carrera



#include <stdio.h>

int main()
{
    int i, n, n_actual = 0, n_aux = 1, n_siguiente; // Fibonacci debe comenzar con 0 y 1, n es cantidad de terminos, n_actual es el numero actual, auxiliar sirve para igualar y siguiente para calcular la suma de los dos anteriores
    
    printf("Ingrese la cantidad de términos que desea para la Serie de Fibonacci: "); // solicitar n 
    scanf("%d", &n); // ingresar valor y guardarlo en la variable

    printf("La Serie de Fibonacci con %d términos es la siguiente: \n", n); // mostrar la cantidad de términos solicitados
    
    // ejecutar un for desde 1 hasta el limite indicado n de la serie de Fibonacci
    for (i = 1; i <= n; i++) {
        printf ("%d, ", n_actual);
        n_siguiente = n_actual + n_aux; // sumar los dos terminos anteriores para obtener el siguiente
        n_actual = n_aux; // hacer que el numero actual se incremente a ser el siguiente, debido a la siguiente linea
        n_aux = n_siguiente; // hacer que el auxiliar sea el siguiente, para luego enviarlo al actual
    }
    
    return 0;
}