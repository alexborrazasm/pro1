/* Plantee e implemente una función recursiva en Lenguaje C que calcule la suma de los términos de la sucesión de Fibonacci hasta 
el término indicado por el usuario a través del teclado. Además de la función, implemente la función apropiada para probar su 
funcionamiento, activando esta último  desde  el programa principal.  */
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

int fibto(int n) { /* fib hasta n, inluido */
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else
        return fib(n) + fib(n-1);
}

void test() {
    int n = pedirN("Programa que calcula la suma de la sucesión de fibonacci hasta un número\nDime el número");
    printf("La suma es: %d\n", fibto(n));
}

int main() {
    test();
    return 0;
}