/* Plantee e implemente una subrutina en Lenguaje C que, utilizando las funciones desarrolladas en los dos ejercicios anteriores, 
lea una frase completa del teclado (terminada en ENTER) y muestre por pantalla el número de letras (mayúsculas y minúsculas) y 
dígitos que incluye. */
#include<stdlib.h>
#include<stdio.h>

#define TAM 500

int mayusMinus(char c) { // 1 -> minúsculas | 2 -> mayúsculas
    if ('a' <= c && c <= 'z') {
        return 1;
    } else if ('A' <= c && c <= 'Z') {
        return 2;
    }
}

int esNumero(char c) {
    if ('0' <= c && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

void test() {
    printf("Introduzca una frase: ");
    char frase[TAM];
    int numero = 0, mayus = 0, minus = 0, i = 0;

    if (fgets(frase, sizeof(frase), stdin) == NULL) {
        printf("Error al leer la frase.\n");
        return;
    }

    while (frase[i]!= '\0') {
        if (esNumero(frase[i])) {
            numero++;
        } else {
            if (mayusMinus(frase[i])== 1) {
                minus++;
            } else if (mayusMinus(frase[i]) == 2) {
                mayus++;
            } else {}
        }
        i++;
    }
    printf("Su frase tiene:\n  Letras: %d mayúsculas y %d minúsculas\n  Dígitos: %d\n", mayus, minus, numero);
}

int main(){
    test();
    return 0;
}