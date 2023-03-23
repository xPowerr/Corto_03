#include <stdio.h>
#include "operaciones.h"
#include <math.h> // Necesario para la constante M_PI
const float PI = M_PI; // Declaración de la constante PI con la libreria

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

float divide(float a, float b) { // necesario verificar que no este dividiendo entre 0
    if (b == 0) {
        printf("No se puede dividir entre 0\n");
        return 0;
    } else {
        return a / b;
    }
}