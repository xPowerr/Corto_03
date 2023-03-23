/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// CORTO_03 - Ejercicio 4
// Autor: Gabriel Carrera



#include <stdio.h>
#include "operaciones.h"

int main()
{
    int a, b; // los dos números ingresados por el usuario
    float c; // el resultado de las operaciones
    
    printf("Ingrese dos números: "); // solicitar los dos números 
    scanf("%d %d", &a, &b); // ingresar valor y guardarlo en la variable

    printf("El valor de PI aproximado es: %.5f\n", PI); // mostrar el valor de pi con 5 decimales
    
    c = add(a,b);
    printf("El resultado de la suma de ambos números es: %.2f. \n", c); 
    
    c = sub(a,b);
    printf("El resultado de la resta de ambos números es: %.2f. \n", c); 
    
    c = mult(a,b);
    printf("El resultado de la multiplicación de ambos números es: %.2f. \n", c); 
    
    
    c = divide(a,b);
    printf("El resultado de la división de %d entre %d es: %.2f. \n", a, b, c); 
    
    return 0;
}