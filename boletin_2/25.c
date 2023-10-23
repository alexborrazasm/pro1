/* Plantee e implemente un programa en Lenguaje C que muestre la tabla de multiplicar de los cinco primeros números en un formato similar 
al indicado en el ejercicio anterior. */

#include<stdio.h>

int main() {
    for (int n = 1; n < 6; n++) {
        printf("Tabla de múltiplicar del %d\n", n);
        for (int i = 0; i < 11; i++) {
            printf("%8d x %2d = %2d\n", n, i, n * i);
        }
        printf("--------------------------\n");
    }
    return 0;
}