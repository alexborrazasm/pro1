/* Plantee e implemente una función en Lenguaje C que devuelva el factorial de un número n (n!). Además del subprograma, implemente la función apropiada 
para  probar  su  funcionamiento,  activando  este  último  desde  el  programa principal. */

#include<stdio.h>

double fact(int n) {
    double f=1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
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
}