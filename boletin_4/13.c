/* Plantee e implemente un programa en  lenguaje C que permita introducir apropiadamente una matriz NxN de números enteros (0<N<20), la visualice apropiadamente 
por pantalla (formato matricial) y muestre el elemento mayor y el elemento menor de dicha matriz y sus posiciones.  */
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define TAM 20

void rellenarMatriz(int matriz[][TAM], int filas, int columnas) {
    int j, num;

    printf("\nIntroduce la matriz fila por fila, %d elementos, pulsando <enter>:\n", columnas);

    for (int i = 0; i < filas; i++) {
        printf("%d: ", i+1);
        j = 0;
        while (1) {
        if (j >= columnas) {
            break;
        }
        if (scanf("%d", &num) != 1) {
            printf("Entrada inválida. Terminando el programa.\n");
            exit(0);
        }
        matriz[i][j] = num;
        j++;
        }
    }
}

void imprimirMatriz(int matriz[][TAM], int filas, int columnas) {
    printf("\n\nLa matriz introducida:\n\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (j == 0) {
                printf("|");
            }
            printf("%3d ", matriz[i][j]);
            if (j == columnas-1) {
                printf("|");
            }
        }
        puts("");
    }
}

void maxMin(int matriz[][TAM], int filas, int columnas) {
    int maxi, maxj, max = INT_MIN;
    int mini, minj, min = INT_MAX;
    int n;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            n = matriz[i][j];
            if(n>max) {
                max = n;
                maxi = i+1;
                maxj = j+1;
            }
            if (n<min) {
                min = n;
                mini = i+1;
                minj = j+1;
            }
        }
    }

    printf("\nEl elemento menor es %d y está en la posición [%d,%d].\n", min, mini, minj);
    printf("\nEl elemento menor es %d y está en la posición [%d,%d].\n", max, maxi, maxj);
}

int main() {
    int matriz[TAM][TAM];
    int filas, columnas;
    
    printf("Dime el número de filas: ");
    scanf("%d", &filas);
    printf("Dime el número de columnas: ");
    scanf("%d", &columnas);

    rellenarMatriz(matriz, filas, columnas);
    imprimirMatriz(matriz, filas, columnas);
    maxMin(matriz, filas, columnas);
    
    return 0;
}