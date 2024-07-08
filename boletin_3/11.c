/* Plantee e implemente una función en Lenguaje C para leer un entero dentro de 
un intervalo, cuyos límites inferior y superior los proporcione el usuario por 
teclado. Además de la función, implemente la función apropiada para probar su 
funcionamiento, activando este último desde el programa principal. */
#include <stdio.h>

void pedirN(const char *string, int *n) {
    printf("%s: ", string);
    scanf("%d", n);
}

int enRango(int i, int s, int n) {
    if (i < n && n < s) {
        return 1;
    } else {
        return 0;
    }
}

void test() {
    int n, i, s;
    pedirN("Dime el límite superior", &s);
    pedirN("Dime el límite inferior", &i);
    pedirN("Dime un número", &n);

    if (enRango(i, s, n)) {
        puts("Esta en el rango");
    } else {
        puts("No está en el rango");
    }
}

int main() {
    test();
    return 0;
}