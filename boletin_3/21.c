/* Plantee e implemente un subprograma en Lenguaje C que calcule el término N de
 la sucesión de Fibonacci. Además del subprograma, implemente la función 
apropiada para probar su funcionamiento, activando esta última desde el programa
 principal. */
#include<stdio.h>

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
}

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int fib = 1; // fib 1 = 1
        int fibAns = 0; // fib 0 = 0
        int temp;
        for (int i = 1; i < n; i++) {
            temp = fib;
            fib = fib + fibAns;
            fibAns = temp;
        }
        return fib;
    }
}

void test() {
    int n = pedirN("Programa que calcula un término de la sucesión de fibonacci"
                    "\nDime un número");
    printf("El resultado es: %d\n", fib(n));
}

int main() {
    test();
    return 0;
}