/* Defina en lenguaje C una función que reciba una matriz cuadrada de N x N elementos cuya definición de tipo es typedef tBase tMatriz[N][N] y devuelva la 
matriz transpuesta del mismo tipo ya definido. La función será válida para toda matriz con cualquier tipo base numérico entero o real. Aclaración: No está 
permitido resolver el ejercicio utilizando punteros de forma explícita, deberá resolverse utilizando las matrices como estructura estática. */
#include<stdio.h>
#include<stdlib.h>

#define N 3
#define F_PRINT "%5.2f "
#define F_SCAN  "%f"

typedef float tBase;
typedef tBase tMatriz[N][N];

void imprimirMatriz(const char *mensaje, tMatriz matriz, int n) {
    printf("\n%s:\n\n", mensaje);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                printf("|");
            }
            printf(F_PRINT, matriz[i][j]);
            if (j == n-1) {
                printf("|");
            }
        }
        puts("");
    }
}

void rellenarMatriz(tMatriz matriz, int n) {
    tBase num;

    printf("\nIntroduce la matriz fila por fila, %d elementos, pulsando <enter>:\n", n);

    for (int i = 0; i < n; i++) {
            printf("Fila %d: ", i);
            for (int j = 0; j < n; j++){
                if (scanf(F_SCAN, &num) != 1) {
                    printf("ERROR, entrada no válida");
                    exit(0);
                }
                matriz[i][j] = num;
            }
        }
}

void transMatriz(tMatriz matriz, tMatriz matrizSol, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrizSol[j][i] = matriz[i][j];
        }
    }
}

int main() {
    tMatriz matriz0;
    tMatriz matriz1;

    rellenarMatriz(matriz0, N);
    imprimirMatriz("Matriz introducida", matriz0, N);

    transMatriz(matriz0, matriz1, N);
    imprimirMatriz("Matriz transpuesta", matriz1, N);

    return 0;
}