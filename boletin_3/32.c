/* Plantee e implemente una función recursiva en Lenguaje C para determinar el término N de la sucesión de Fibonacci. Además de la 
función, implemente otra función  apropiada para probar su funcionamiento. */
#include<stdio.h>

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
}

int fib(int n) { /* Prometo no pasar número negativos */
    if (n==0) {
        return 0;
    } else if (n==1) {
        return 1;
    } else {
        return fib (n-1) + fib (n-2);
    }
}

void test() {
    int n = pedirN("Programa que calcula un término de la sucesión de fibonacci\nDime un número");
    printf("El resultado es: %d\n", fib(n));
}

int main() {
    test();
    return 0;
}