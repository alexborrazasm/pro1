/* Plantee e implemente un programa en lenguaje C que permita introducir un 
cuadrado (NxN) por teclado y determine si es mágico. Un cuadrado mágico es una 
matriz NxN de números enteros del 1 al  N^2 en la que la suma de sus filas, sus 
columnas y sus diagonales principales coincide. */
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define TAM 20

int getInt(const char *string, int min, int max) {
    int n;
    printf("%s\n", string);
    printf("Rango (%d-%d]: ", min, max);
    scanf("%d", &n);
    if (n > min && n <= max) {
        return n;
    }
    puts("ERROR, rango incorrecto.\nVueleve a intentarlo.");
    return getInt(string, min, max);
}

void getMatrix(const char *string, int matrix[][TAM], int n) {
    int temp;

    printf("\n%s:\n", string);
    puts("Introduce fila a fila y pulsa <enter>");

    for (int i = 0; i < n; i++) {
        printf("Fila %d: ", i);
        for (int j = 0; j < n; j++){
            if (scanf("%d", &temp) != 1) {
                printf("ERROR, entrada no válida");
                exit(0);
            }
            matrix[i][j] = temp;
        }
    }
}

void printMatrix(const char *string, int matrix[][TAM], int n) {

    printf("\n%s:\n", string);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                printf("[");
            }
            printf("%3d", matrix[i][j]);
            if (j == n-1) {
                puts("]");
            }
        }
    }
}

bool isSquare(int matrix[][TAM], int n) {
    // Calcula la suma esperada para un cuadrado mágico
    int expectedSum = n * (n * n + 1) / 2;

    // Comprueba la suma de las filas
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != expectedSum) {
            return false; // No es un cuadrado mágico
        }
    }

    // Comprueba la suma de las columnas
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != expectedSum) {
            return false; // No es un cuadrado mágico
        }
    }

    // Comprueba la suma de la diagonal principal
    int diagSum = 0;
    for (int i = 0; i < n; i++) {
        diagSum += matrix[i][i];
    }
    if (diagSum != expectedSum) {
        return false; // No es un cuadrado mágico
    }

    // Comprueba la suma de la diagonal secundaria
    diagSum = 0;
    for (int i = 0; i < n; i++) {
        diagSum += matrix[i][n - 1 - i];
    }
    if (diagSum != expectedSum) {
        return false; // No es un cuadrado mágico
    }

    return true; // Es un cuadrado mágico
}

int main() {
    int square[TAM][TAM];
    int n = getInt("Introduce el tamaño de la matriz (NxN)", 0, TAM);

    getMatrix("Matriz a comprobar", square, n);
    printMatrix("Matriz introducida", square, n);

    if (isSquare(square, n)) {
        printf("\nEs un cuadrado magico.\n");
    } else {
        printf("\nNo es un cuadrado magico.\n");
    }
    
    return 0;
}