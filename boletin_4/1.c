/* Plantee e implemente un programa en lenguaje C, que utilizando exclusivamente
 subprogramas, solicite números enteros por teclado y vaya almacenándolos en un 
 array de 10 elementos, mostrando a continuación por pantalla el contenido del 
 array creado. */
#include<stdio.h>

#define TAM 10

int pedirN(const int i) {
    int n;
    printf("Dime el %dº número: ", i);
    scanf("%d", &n);
    return n;
    // Pide un entero
}

void imprimirVector (int v[], const int n) {
    printf("El contenido del vector es: ");
    for (int i = 0; i < n; i++) {
        printf("%3d", v[i]);
    }
    puts("");
}

void rellenar() {
    int array[TAM];

    for (int i = 0; i < TAM; i++) {
        array[i] = pedirN(i+1); 
    }

    imprimirVector(array, TAM);
}

int main() {
    rellenar();
    return 0;
}