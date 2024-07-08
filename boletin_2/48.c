/* Plantee e implemente un programa en Lenguaje C para obtener elementos del 
triángulo de Floyd hasta un número dado. */
#include <stdio.h>

int main() {
    int n, contador = 1;

    // Obtener el número de filas del usuario
    printf("Introduce el número máximo del triángulo de Floyd: ");
    scanf("%d", &n);

    // Validar que el número de filas sea positivo
    if (n <= 0) {
        printf("Error: Ingresa un número positivo de filas.\n");
        return 1;
    }

    // Imprimir elementos del triángulo de Floyd hasta el número máximo
    printf("Elementos del triángulo de Floyd hasta %d:\n", n);
    for (int i = 1; contador <= n; i++) {
        for (int j = 1; j <= i && contador <= n; j++) {
            printf("%3d ", contador);
            contador++;
        }
        printf("\n");
    }
    return 0;
}