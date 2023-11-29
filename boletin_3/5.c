/* Plantee e implemente un subprograma en Lenguaje C para mostrar por pantalla el triángulo de Floyd hasta un número entero 
introducido por teclado. Además del  subprograma,  implemente  la  función  apropiada  para  probar  su 
funcionamiento, activando este último desde el programa principal. */
#include<stdio.h>

void trianguloFloyd(int n) {
    int contador = 1;
    // Imprimir elementos del triángulo de Floyd hasta el número máximo
    printf("Elementos del triángulo de Floyd hasta %d:\n", n);
    for (int i = 1; contador <= n; i++) {
        for (int j = 1; j <= i && contador <= n; j++) {
            printf("%3d ", contador);
            contador++;
        }
        printf("\n");
    }
}

void pedirN(const char *mensaje, int *n) {
    printf("%s: ", mensaje);
    scanf("%d", n);
}

void mayorZero(int *n) {
    // Validar que el número de filas sea positivo
    if (*n <= 0) {
        printf("Error: Ingresa un número positivo de filas.\n");
        pedirN("Numero filas", n);
        mayorZero(n);
    }
}

int main() {
    int n;

    // Obtener el número de filas del usuario
    pedirN("Dime hasta que número hago el triangulo de Floyd", &n);

    // Comprobar que sea mayor que Zero
    mayorZero(&n);

    trianguloFloyd(n);

    return 0;
}