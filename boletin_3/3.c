/* Plantee e implemente un programa en lenguaje C, que utilizando exclusivamente
 subprogramas, calcule la suma de los elementos de un array de números reales 
 proporcionados  por  el  usuario,  considerando  como  máximo  30 elementos. */
#include<stdio.h>

int pedirN(const char *mensaje, int n) {
    printf("%s (máximo %d): ", mensaje, n);
    scanf("%d", &n);
    return n;
}

void sumarArray(float array[], int n) {
    float acc = 0;
    for(int i = 0; i < n; i++) {
        acc += array[i];
    }
    printf("La suma del array es: %.2f\n", acc);
}

void pedirArray(int n) {
    float array[n];
    for(int i = 0; i < n; i++) {
        printf("Dime el %d elemento: ", i+1);
        scanf("%f", &array[i]);
    }
    sumarArray(array, n);
}

int main() {
    pedirArray(pedirN("Cuantos números quieres sumar?", 30));
    return 0;
}