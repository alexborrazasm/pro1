/* Plantee e implemente un programa en lenguaje C que permita introducir apropiadamente una matriz NxN de enteros y que, a petición del usuario, intercambie las 
filas o columnas i y j de dicha matriz. Muestre por pantalla en formato matricial tanto la matriz original introducida como la matriz resultante del intercambio 
de filas o columnas solicitado por el usuario. */
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>

#define TAM 20

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

void imprimirMatriz(const char *mensaje,int matriz[][TAM], int filas, int columnas) {
    printf("\n%s:\n\n", mensaje);
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

void invMatriz(int matriz[][TAM], int matrizSol[][TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizSol[j][i] = matriz[i][j];
        }
    }
}

bool siNo(const char *mensaje) {
    char c;
    printf("\n%s: (s/n)\n", mensaje);
    while (1) {
        c = getchar();
        if (c == 's' || c == 'S') {
            return true;
        } if (c == 'n' || c == 'N') {
            return false;
        }    
    }
}

int main() {
    int matriz[TAM][TAM];
    int matrizInv[TAM][TAM];
    int filas, columnas;
    
    filas = pedirN("Dime el número de filas (máximo 20)", 0, TAM+1);
    columnas = pedirN("Dime el número de columnas (máximo 20)", 0, TAM+1);

    rellenarMatriz(matriz, filas, columnas);
    imprimirMatriz("\nLa matriz introducida es",matriz, filas, columnas);

    if (siNo("Quieres cambiar filas por columnas")) {
        invMatriz(matriz, matrizInv, filas, columnas);
        imprimirMatriz("La matriz cambiando filas por columnas es",matrizInv, filas, columnas);
    }

    printf("\nFIN DEL PROGRAMA\n\n");

    return 0;
}