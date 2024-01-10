/* Plantee e implemente un subprograma en Lenguaje C que indique si un número entero es o no un número primo. Además del 
subprograma, implemente la función apropiada para probar su funcionamiento, activando esta última desde el programa principal. */
#include<stdio.h>

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
    // Pide un entero
}

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;  // Los números menores o iguales a 1 no son primos
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;  // Si el número es divisible por algún otro número, no es primo
        }
    }
    return 1;  // Si no se encontraron divisores, el número es primo
}

void test() {
    int n = pedirN("Dime un número para saber si es primo");
    if (esPrimo(n)) {
        printf("Es primo\n");
    } else {
        printf("No es primo\n");
    }
}

int main() {
    test();
    return 0;
}