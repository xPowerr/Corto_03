/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// CORTO_03 - Ejercicio 2
// Autor: Gabriel Carrera



#include <stdio.h>

int main()
{
    float farenheit, celcius; // floats porque tienen decimales
    
    printf("Ingrese la temperatura deseada en grados Farenheit ºF: "); // solicitar valor
    scanf("%f", &farenheit); // ingresar valor y guardarlo en la variable
    
    // convertir de farenheit a celcius
    celcius = (farenheit - 32) * 5/9;
    
    printf("La temperatura de %.2f grados Farenheit equivale a %.2f grados Celcius.\n", farenheit, celcius); // %.2f es para que muestre dos decimales del float

    return 0;
}