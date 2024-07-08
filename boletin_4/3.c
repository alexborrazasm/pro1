/* Plantee e implemente un programa en lenguaje C, que utilizando exclusivamente
 subprogramas, calcule la suma de los elementos de un array de números reales 
 proporcionados  por  el  usuario,  considerando  como  máximo  30 elementos. */
#include<stdio.h>

#define TAM 30

void rellenarV(int v[], int n) {
    printf("Dime los elementos ");
    for (int i = 0; i < n; i++) {
        printf("%dº: ", i+1);
        scanf("%d", &v[i]);
    }
}

void printV(int v[], int n) {
    printf("Los elementos en el array son:\n");
    for (int i = 0; i < n; i++) {
        if(i==0) {
            printf("[%d, ", v[i]);
        } else if (i == n-1){
            printf("%d]", v[i]);
        } else {
            printf("%d, ", v[i]);
        }  
    }
    puts("");
}

int main() {
    int array[TAM];

    rellenarV(array, TAM);
    printV(array, TAM);

    return 0;
}