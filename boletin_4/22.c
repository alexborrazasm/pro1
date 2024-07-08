/* Plantee e implemente una función en lenguaje C que reciba dos arrays de 
reales desordenados de 30 elementos cada uno y devuelva una array ordenado con 
los elementos de los dos anteriores.  */
#include<stdio.h>
#include<stdlib.h>

#define TAM 30

typedef float tVector[TAM];

int pedirArray(const char *mensaje, tVector v) {
    float num;
    int i = 0;
    printf("\n%s\n", mensaje);
    printf("Introducca un array de reales, hasta pulsar <enter>:\nFormato -> x"
            " y z n k\n-> ");

    do {
        if (scanf("%f", &num) != 1) {
            printf("\nERROR de entrada.\n");
            exit(0);
        }
        v[i] = num;
        i++;
    } while (getchar() != '\n');

    return i;
}

void mergetVector(tVector v1, int n1 ,tVector v2, int n2, float array[]) {
    for (int i = 0; i < n1+n2; i++) {
        if (i < n1) {
            array[i] = v1[i];
        } else {
            array[i] = v2[i-n1];
        }    
    }
}

void burbuja(float array[], int n) {
    int temp;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (array[j] > array [j+1]) {
                temp = array[j];
                array[j] = array[j+1];      // Intercambio
                array[j+1] = temp; 
            }
        }
    }
}

void printArray(const char *mensaje, float v[], int n) {
    printf("%s", mensaje);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("[%.2f, ", v[i]);
        } else if (i < n-1) {
            printf("%.2f, ", v[i]);
        } else {
            printf("%.2f]\n", v[i]);
        }
    }
}

void ordenar(tVector v1, int n1 ,tVector v2, int n2) {
    int n = n1+n2;
    float resultado[n];

    mergetVector(v1, n2, v2, n2, resultado);
    printArray("Array antes de ordenar: ", resultado, n);
    burbuja(resultado, n);
    printArray("Array ordenado: ", resultado, n);
}

int main() {
    tVector v1, v2;

    int nV1 = pedirArray("Primer array:", v1);
    int nV2 = pedirArray("Segundo array:", v2);

    ordenar(v1, nV1, v2, nV2);
    
    return 0;
}
