/* Plantee e implemente una función en Lenguaje C para saber si un carácter es o
 no un dígito. Además de la función, implemente la función apropiada para probar
  su funcionamiento, activando este último desde el programa principal. */
#include<stdio.h>

int esNumero(char c) {
    if ('0' <= c && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

void test() {
    printf("Dime una char para saber si es o no un dígito: ");
    if (esNumero(getchar())) {
        printf("Es un dígito\n");
    } else {
        printf("No es un dígito\n");
    }
}

int main() {
    test();
    return 0;
}