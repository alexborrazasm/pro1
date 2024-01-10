/* Plantee e implemente un programa en lenguaje C que permita introducir propiadamente una matriz NxN de números enteros (0<N<10), la visualice apropiadamente 
por pantalla (formato  matricial) y muestre la posición de un elemento punto de silla, si existe. Una matriz presenta un punto de silla si alguna posición de 
la misma es al mismo tiempo el menor valor de su fila y el mayor valor de su columna.  */
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<stdbool.h>

#define TAM 10

typedef int matrix[10][10];

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

void getMatrix(matrix m, int n) {
    int num;

    printf("\nIntroduce la matriz fila por fila, %d elementos, pulsando <enter>:\n", n);

    for (int i = 0; i < n; i++) {
            printf("Fila %d: ", i+1);
            for (int j = 0; j < n; j++){
                if (scanf("%d", &num) != 1) {
                    printf("ERROR, entrada no válida");
                    exit(0);
                }
                m[i][j] = num;
            }
        }
}

void printMatrix(const char *string, matrix matrix, int n) {

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

bool isChair(int i, int j, matrix mat, int n) {  // Esto se puede optimizar guardando el valor máximo en cada columna 
    int pMin = -1, min = INT_MAX;;
    int pMax = -1, max = INT_MIN;

    for (int m = 0; m < n; m++) {       // Elemento mínimo de la fila
        if (mat[i][m] < min) {
            min = mat[i][m];
            pMin = m;
        }
        if (mat[m][j] > max) {          // Elemento máximo de la columna
            max = mat[m][j];
            pMax = m;
        }
    }
    if (pMin == i && pMax == j) {
        return true;
    } 
    return false;
}

void chairPoint(matrix m, int n) {
    int iChair, jChair;
    bool check = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (isChair(i, j, m, n)) {
                check = true;
                iChair = i;
                jChair = j;
            }
        }
    }
    
    if (check) {
        printf("\nLa posición de un elemento punto de silla es fila = %d y columna = %d\n", iChair+1, jChair+1);
    } else {
        printf("\nNo existe ningun elemento punto de silla\n");
    }
}

int main() {
    matrix m;
    int n = getInt("Dime el tamaño de la matriz NxN", 0, TAM);

    getMatrix(m, n);
    printMatrix("La matriz introducida es", m, n);

    chairPoint(m, n);

    return 0;
}