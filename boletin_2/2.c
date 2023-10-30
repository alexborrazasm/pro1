/* Plantee e implemente un programa en Lenguaje C que solicite un número entero por teclado y muestre por pantalla si es par o impar. */

#include<stdio.h>

int main() {
    int n;

    printf("Introduzca un número: ");
    scanf("%d", &n);

    if (n%2 == 0)
        printf("Es par\n");
    else 
        printf("Es impar\n");
    
    return 0;
}