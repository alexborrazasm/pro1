/* Plantee e implemente una función recursiva en Lenguaje C que calcule y 
muestre la tabla de multiplicar de un número entero a partir de dicho número y 
el máximo multiplicador. Además de la función, implemente la función apropiada 
para probar su funcionamiento.  */
#include<stdio.h>

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
    // Pide un entero
}

int tablaMultiplicar(int n, int acc) { // acc = 0
    acc += 1;
    if (acc == 10) {
        printf("%d x %2d = %3d\n", n, acc, n*acc);
        return 0;
    } else {
        printf("%d x %2d = %3d\n", n, acc, n*acc);
        return tablaMultiplicar(n, acc);
    }
}

int main() {
    tablaMultiplicar(pedirN("***Programa que calcula tablas de multiplicar***\n"
                            "Dime el número"), 0);
    return 0;
}