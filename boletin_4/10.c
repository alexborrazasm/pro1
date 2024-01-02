/* Plantee e implemente una función en lenguaje C que reciba dos arrays de enteros desordenados de 50 elementos cada uno y devuelva una array ordenado con los 
elementos de los dos anteriores. */
#include<stdio.h>

#define TAM 50

void imprimirArray(const char *string, int array[], int n) {
    printf("\n%s:\n", string);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("[%d, ", array[i]);
        } else if (i < n-1) {
            printf("%d, ", array[i]);
        } else { 
            printf("%d]", array[i]);
        }
    } 
    printf("\n\n");
}

int pedirArray(const char *string, int array[], int n) {
    int i = 0;
    int num;

    printf("%s:\n", string);

    do {
        if (i >= n) {
            break;
        }
        scanf("%d", &num);
        array[i] = num;
        i++;
    } while (getchar() != '\n');

    return i;
}

void juntarArrays(int array1[], int t1, int array2[], int t2, int sol[]) {
    for (int i = 0; i < t1+t2; i++) {
        if (i < t1) {
            sol[i] = array1[i];
        } else {
            sol[i] = array2[i-t1];
        }
    }
}

void burbuja(int array[], int n) {
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

void ord(int array1[], int t1, int array2[], int t2, int sol[]) {
    juntarArrays(array1, t1, array2, t2, sol);
    burbuja(sol, t1+t2);
    imprimirArray("El array ordenado es", sol, t1 + t2);
}

int main() {
    int array1[TAM];
    int array2[TAM];
    int arrayOrd[sizeof(array1) + sizeof(array2)];
    int elementos1 = pedirArray("Dime los elementos del primer array (máximo 50)", array1, TAM);
    int elementos2 = pedirArray("Dime los elementos del segundo array (máximo 50)", array2, TAM);

    ord(array1, elementos1, array2, elementos2, arrayOrd);

    return 0;
}