/* Plantee e implemente un programa en Lenguaje C que  muestre  por pantalla la tabla de multiplicar del 7 en un formato similar al 
siguiente */

#include<stdio.h>

int main() {
    printf("Tabla de múltiplicar del 7\n");
    for (int i = 0; i < 11; i++) {
        printf("%8d x %2d = %2d\n", 7,i, 7 * i);
    }
    
    return 0;
}