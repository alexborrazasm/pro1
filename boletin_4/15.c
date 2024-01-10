/* Plantee e implemente un programa en lenguaje C que permita introducir apropiadamente una matriz NxN de números reales y que muestre por pantalla en formato 
matricial tanto la matriz original introducida como su matriz traspuesta. */
#include<stdio.h>
#include <stdlib.h>

#define TAM 20

void imprimirMatriz(const char *mensaje,float matriz[][TAM], int filas, int columnas) {
    printf("\n%s:\n\n", mensaje);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (j == 0) {
                printf("|");
            }
            printf("%5.2f ", matriz[i][j]);
            if (j == columnas-1) {
                printf("|");
            }
        }
        puts("");
    }
}

int pedirN(const char *mensaje, int limInf, int limSup) {
    int n;
    printf("%s: ", mensaje);
    scanf("%d", &n);
    if (n > limInf && n < limSup ) {
        return n;
    } else {
        printf("ERROR, fuera de rango.\n");
        return pedirN(mensaje, limInf, limSup);
    }
}

void rellenarMatriz(float matriz[][TAM], int filas, int columnas) {
    int j;
    float num;

    printf("\nIntroduce la matriz fila por fila, %d elementos, pulsando <enter>:\n", columnas);

    for (int i = 0; i < filas; i++) {
        printf("%d: ", i+1);
        j = 0;
        while (1) {
        if (j >= columnas) {
            break;
        }
        if (scanf("%f", &num) != 1) {
            printf("Entrada inválida. Terminando el programa.\n");
            exit(0);
        }
        matriz[i][j] = num;
        j++;
        }
    }
}

void transMatriz(float matriz[][TAM], float matrizSol[][TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizSol[j][i] = matriz[i][j];
        }
    }
}

int main() {
    float matriz[TAM][TAM], matrizT[TAM][TAM];
    int filas, columnas;
    
    filas = pedirN("Dime el número de filas (máximo 20)", 0, TAM+1);
    columnas = pedirN("Dime el número de columnas (máximo 20)", 0, TAM+1);

    rellenarMatriz(matriz, filas, columnas);
    imprimirMatriz("Matriz introducida", matriz, filas, columnas);

    transMatriz(matriz, matrizT, filas, columnas);
    imprimirMatriz("Matriz transpuesta", matrizT, filas, columnas);

    return 0;
}