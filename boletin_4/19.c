/* Plantee e implemente un programa en lenguaje C que rellene tres arrays con 500 elementos enteros de forma aleatoria y posteriormente muestre por pantalla 
todos los números conseguidos de forma ordenada de menor a mayor. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 500
#define TAMS TAM * 3

typedef int array[TAM];
typedef int superarray[TAMS];

void iniciarSemilla() {
    srand(time(NULL));
}

void iniArray(array v, int n) {
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 1000;
    }
}

void mergeArrays(array v, array w, array m, superarray super, int n) {
    for (int i = 0; i < n * 3; i++) {
        if (i < n) {
            super[i] = v[i];
        } else if (i < 1000) {
            super[i] = w[i - n];
        } else {
            super[i] = m[i - n - n];
        }
    }
}

void imprimirSuperArray(superarray w, int n) {
    for (int i = 0; i < n; i++) {
        if (i < n-1) {
            printf("%4d,", w[i]);
        } else {
            printf("%4d.\n", w[i]);
        }
        if (!((i+1)%35)) {
            putchar('\n');
        }
    }
}

void burbuja(superarray w, int n) {
    int t;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (w[j] > w[j+1]) {
                t = w[j];
                w[j] = w[j+1];
                w[j+1] = t;
            }
        }
    }
}

int main() {
    iniciarSemilla();
    array v1, v2, v3;
    superarray w;

    iniArray(v1, TAM);
    iniArray(v2, TAM);
    iniArray(v3, TAM);

    mergeArrays(v1, v2, v3, w, TAM);

    burbuja(w, TAMS);

    imprimirSuperArray(w, TAMS);

    return 0;
}