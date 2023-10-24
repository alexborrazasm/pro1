/* Plantee e implemente un programa en Lenguaje C que calcule el factorial de un número entero positivo introducido por teclado. */

#include<stdio.h>

int main() {
    int n;
    int fact = 1;

    printf("De que número quieres calcular el factorial: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        fact = fact * i;
    }

    printf("%d! = %d\n", n, fact);
    return 0;
}