/* Plantee e implemente un programa en lenguaje C, que utilizando exclusivamente subprogramas, solicite nombres de animales por 
teclado y vaya rellenando un array de 7 elementos, mostrándolos posteriormente por pantalla apropiadamente.
*/
#include<stdio.h>
#include <string.h>

#define TAM 7
#define MAX_STRING_LENGTH 50

void imprimirStringV(char v[][MAX_STRING_LENGTH]) {
    printf("Los nombres de los animales son: \n");
    for (int i = 0; i < TAM; i++) {
        printf(" %dº: ", i+1);
        for (int j = 0; j < strlen(v[i]); j++) {
            if (v[i][j] != '\n') {
                printf("%c", v[i][j]);
            }
        }
    }
    puts("");
}

void rellenar() {
    char array[TAM][MAX_STRING_LENGTH];

    printf("Dime %d nombres de animales: \n", TAM);

    for (int i = 0; i < TAM; i++) {
        printf("%dº: ", i + 1);
        fgets(array[i], MAX_STRING_LENGTH, stdin);
    }

    imprimirStringV(array);
}

int main() {
    rellenar();
    return 0;
}