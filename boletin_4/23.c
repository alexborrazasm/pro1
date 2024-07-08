/*  Plantee e implemente una función en lenguaje C que reciba dos arrays de tipo
 base carácter, sin finalizar en ‘\0’, es decir, no son cadenas; ambos desordenados 
y con 100 elementos cada uno y devuelva un array ordenado con los elementos de los
 dos anteriores. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 100

void iniSemilla() {
    srand(time(NULL));
}

void iniArrayC(char array[], int n) {
    for (int i = 0; i < n; i++) {
        array[i] = 'A' + rand() % 26;
    }
}

void mergeArrayC(char c1[], char c2[], int n, char suma[]) {
    int j = 0;

    for (int i = 0; i < n*2; i++) {
        if (!(i % 2)) {
            suma[i] = c1[j];
        } else {
            suma[i] = c2[j];
            j++;
        }
    }
}

void burbujaC (char array[], int n) {
    char temp;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (array[j] > array[j+1]) {        // Intercambio
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }   
    }
}

void printArrayC(const char *mensaje, char array[], int n) {
    printf("%s", mensaje);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("[%c, ", array[i]);
        } else if (i < n-1) {
            printf("%c, ", array[i]);
        } else {
            printf("%c]\n", array[i]);
        }
    }
}
    
int main() {
    char array1[TAM], array2[TAM], arraySuma[TAM * 2];

    iniSemilla();

    iniArrayC(array1, TAM);
    iniArrayC(array2, TAM);
    printArrayC("\nPrimer Array:\n", array1, TAM);
    printArrayC("\nSegundo Array:\n", array2, TAM);

    mergeArrayC(array1, array2, TAM, arraySuma);
    printArrayC("\nArray suma desordenado:\n", arraySuma, TAM * 2);
    burbujaC(arraySuma, TAM * 2);
    printArrayC("\nArray ordenado:\n", arraySuma, TAM * 2);

    return 0;
}