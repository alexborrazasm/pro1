/* Plantee e implemente un programa en Lenguaje C que calcule la potencia N-ésima de un número entero introducido por el teclado para 
valores no negativos de N. */

#include<stdio.h>

int main() {
    int exp, base, potencia;

    potencia = 1;

    printf("Dime la base: ");
    scanf("%d", &base);
    do {
        printf("Dime el exponente: ");
        scanf("%d", &exp);
    } while (exp < 0);
    
    for (int i = 0; i < exp; i++) {
        potencia = potencia * base;
    }

    printf("El resultado es: %d\n", potencia);

    return 0;
}