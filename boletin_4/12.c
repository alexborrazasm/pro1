/* Plantee e implemente una función en lenguaje C que indique si un array de 
enteros es capicúa.  */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define TAM 20

int pedirArray(int array[], int n) {
    int i = 0;
    int num;

    printf("Introduzca los elementos del array (máximo %d) separados por "
            "espacios, <enter> para terminar:\n", n);

    do {
        if (i >= n) {
            break;
        }
        if (scanf("%d", &num) != 1) {
            printf("Entrada inválida. Terminando el programa.\n");
            exit(0);
        }
        array[i] = num;
        i++;
    } while (getchar() != '\n');

    return i;
}

bool esCapicua(int v[], int n) {
    int m = n-1;
    for (int i = 0; i < n/2; i++) {
        if (v[i] != v[m-i]) {
            return false;
        }
    }
    return true;
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
    int n = pedirArray(v, TAM);

    imprimirArray("Array", v, n);

    if(esCapicua(v, n)) {
        printf("Es capicua.\n");
    } else {
        printf("No es capicua.\n");
    }
    
    return 0;
}