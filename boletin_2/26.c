/* Plantee e implemente un programa en Lenguaje C que  muestre  por pantalla la 
tabla de multiplicar (0-10) de un número entero positivo introducido  por  el 
teclado. Muestre la salida en un formato similar al indicado en el ejercicio 
anterior. */
#include<stdio.h>

main() {
    int n;
    
    printf("De que número quieres la tabla de multiplicar? ");
    scanf("%d", &n);

    printf("Tabla de múltiplicar del %d\n", n);
    for (int i = 0; i < 11; i++) {
        printf("%8d  x %3d = %3d\n", n, i, n * i);
    }
    printf("--------------------------\n");

    return 0;
}