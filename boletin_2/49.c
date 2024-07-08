/* Plantee e implemente un programa en Lenguaje C que muestre por pantalla un 
menú en el que el usuario pueda elegir entre: 
- Visualizar una tabla de los números, los cuadrados y las raíces cuadradas de 
aquellos números contenidos en un intervalo de enteros indicado por el usuario.
- Mostrar por pantalla los divisores de un número entero que indique el usuario.
- Salir del programa. */
#include<stdio.h>
#include<math.h>

void pedirN (const char *mensaje, int *n) { // Función que "rellena" enteros 
    printf("%s", mensaje);
    scanf("%d", n);
}

void menu() {
    printf("Menu:\n"
           "(1) Tabla de los números, los cuadrados y las raíces cuadradas de "
           "un intervalo.\n";
           "(2) Mostrar por pantalla los divisores de un número entero.\n"
           "(3) Salir del programa.\n");
}

void divInt(int n) {
    printf("Los divisores de %d son:\n", n);
    for(int div = 1; div < n + 1; div++) {
        if (n % div == 0)
            printf("%d\t", div);
    }
    printf("\n\n");
}

void tabla(int i1, int i2) {
    for(;i1 < i2 + 1; i1++) {
        printf("Número %d\tCuadrado: %d\tRaíz %.2f\n", i1, i1 * i1, sqrt(i1));
    }
    printf("\n");
}

int main() {
    int selector, n1, n2;
    
    while (1) {
        menu();
        pedirN("Opción: ", &selector);
        switch (selector) {
        case 1: // Imprimir la tabla
            pedirN("Dime el primer número del intervalo: ", &n1);
            pedirN("Dime el segundo número del intervalo: ", &n2);
            tabla(n1, n2);
            break;
        case 2: // Mostrar divesores de un entero
            pedirN("Dime un número entero: ", &n1);
            divInt(n1);
            break;
        case 3: // Salir del programa
            return 0;
        default:
            printf("Error opción no válida una opcion valida\n");
            break;
        }
        while (getchar() != '\n'); // Limpiamos el buffer de entrada
    }
}
