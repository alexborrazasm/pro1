/* Plantee e implemente una función recursiva en Lenguaje C para calcular la 
N-ésima potencia de un número entero. Además de dicha función, implemente la 
función apropiada para probar su funcionamiento, activando esta último desde el 
programa principal. */
#include<stdio.h>

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
    // Pide un entero
}

double elevar(int n, int e) {
    if (e == 0) {
        return 1;
    } else if (n == 1) {
        return n;
    }else {
        return n * elevar(n, e-1);
    }
}

void test() {
    printf("******Programa que calcula la N-ésima potencia de un número entero******\n");
    int base, exp;
    double resultado;
    base = pedirN("Dime la base");
    exp = pedirN("Dime el exponente");
    resultado = elevar(base, exp);
    printf("El resultado de %d^%d es %.0f\n", base, exp, resultado);
}

int main() {
    test();
    return 0;
}