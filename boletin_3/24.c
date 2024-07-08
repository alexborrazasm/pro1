/* Plantee e implemente una función recursiva en Lenguaje C para calcular el 
factorial de un número entero. Además de la función implemente  la  función 
apropiada para probar su funcionamiento, activando este último desde el programa
 principal. */
#include<stdio.h>

double fact(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
}

void test() {
    int n = pedirN("Programa que calcula un factorial (n!)\nDime n");
    printf("Resultado: %.0f\n", fact(n));
}

int main() {
    test();
    return 0;
}