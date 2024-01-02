/*  Plantee e implemente una función recursiva en lenguaje C que devuelva la suma 
de los elementos de un array de enteros. */
#include<stdio.h>

#define TAM 50

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

int sumarArray(int array[], int n) {
    if (n < 0) {
        return 0;
    } else {
        return array[n] + sumarArray(array, n-1);
    }   
}

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

int main() {
    int v[TAM];
    int suma, tamV = pedirArray("Dime un vector de enteros a sumar, y pulsa enter", v, TAM);

    imprimirArray("El array introducido es", v, tamV);
    
    suma = sumarArray(v, tamV-1); // Ojo, indices en c de 0 a n-1
    printf("La suma del array es %d\n", suma);

    return 0;
}