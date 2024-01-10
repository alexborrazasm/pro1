/* Plantee e implemente una función en Lenguaje C para cambiar a mayúsculas un carácter (entre la a y la z). Además de esta 
función, implemente la función apropiada para probar su funcionamiento, tal que lea una frase de teclado (hasta que se pulse 
enter) y la muestre por pantalla cambiada a mayúsculas.  */
#include<stdio.h>

#define TAM 500

int esMinus(char c) {
    if ('a' <= c && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

void minusToMayus(char frase[]) {
    int i = 0, diferencia = 'a' - 'A';

    while (frase[i]!='\0') {
        if (esMinus(frase[i])) {
            frase[i] -= diferencia;
        }
        i++;
    }
}

void test() {
    printf("Introduzca una frase: ");
    char frase[TAM];

    if (fgets(frase, sizeof(frase), stdin) == NULL) {
        printf("Error al leer la frase.\n");
        return;
    }
    minusToMayus(frase);
    puts(frase);
}

int main() {
    test();
    return 0;
}