/* Plantee e implemente una función en Lenguaje C que reciba un entero N y calcule 1+2+3+...+N, devolviendo dicho valor. Además de 
la  función, implemente la función apropiada para probar su funcionamiento, activando este último desde el programa principal.. */
#include<stdio.h>

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
    // Pide un entero
}

int sumar(int n) {
    int acc=0;
    for (int i = 0; i <= n; i++) {
        acc += i;
    }
    return acc;
    // Calcula 1+2+3+...+N
}

void test() {
    printf("El resultado es %d\n", sumar(pedirN("Dime un número")));
}

int main() {
    test();
}

