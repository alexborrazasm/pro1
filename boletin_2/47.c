/* Plantee e implemente un programa en Lenguaje C para obtener las primeras n 
filas del triángulo de Floyd. */
#include <stdio.h>

int main() {
    int n, contador = 1;

    // Obtener el número de filas del usuario
    printf("Introduce el número de filas del triángulo de Floyd: ");
    scanf("%d", &n);

    // Validar que el número de filas sea positivo
    if (n <= 0) {
        printf("Error: Ingresa un número positivo de filas.\n");
        return 1;
    }

    // Imprimir el triángulo de Floyd
    printf("Triángulo de Floyd para %d filas:\n", n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%3d ", contador);
            contador++;
        }
        printf("\n");
    }

    return 0;
}