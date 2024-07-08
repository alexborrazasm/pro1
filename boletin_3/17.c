/* Plantee e implemente una función en Lenguaje C que compruebe si un carácter 
está en mayúsculas o en minúsculas. Además de la subrutina, implemente otra 
función para probar su funcionamiento,  tal  que  lea  un  carácter  de  teclado
 e indique si es una letra (mayúscula o minúscula). */
#include<stdio.h>

int mayusMinus(char c) { // 0 -> minúsculas | 1 -> mayúsculas
    if ('a' <= c && c <= 'z') {
        return 0;
    } else if ('A' <= c && c <= 'Z') {
        return 1;
    } else {
        puts("Caracter no válido");
        exit(1);
    }
}

void test() {
    printf("Dime una letra: ");
    if (mayusMinus(getchar())) {
        printf("Es una mayúscula\n");
    } else {
        printf("Es una minúscula\n");
    }
}

int main() {
    test();
    return 0;
}