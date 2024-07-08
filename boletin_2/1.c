/* Plantee e implemente un programa en Lenguaje C que solicite un número entero 
por teclado y muestre por pantalla si es positivo o negativo. */
#include<stdio.h>

int main() {
    int n;

    printf("Introduzca un número: ");
    scanf("%d", &n);

    if (n<0)
        printf("Negativo\n");
    else if (n==0)
        printf("Es zero\n");
    else
        printf("Positivo\n");

    return 0;
}