/* Plantee e implemente un subprograma en Lenguaje C para mostrar por pantalla N filas del triángulo de Floyd. Incluya la función 
para obtener del usuario un número  de  filas  correcto  (N>0).  Además  del  subprograma,  implemente  la función apropiada para 
probar su funcionamiento, activando este último desde 
el programa principal. */
#include<stdio.h>

void trianguloFloyd(int n) {
    int contador = 1;
    // Imprimir el triángulo de Floyd
    printf("Triángulo de Floyd para %d filas:\n", n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
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
    pedirN("Dime en número de filas del triangulo de Floyd", &n);

    // Comprobar que sea mayor que Zero
    mayorZero(&n);

    trianguloFloyd(n);

    return 0;
}