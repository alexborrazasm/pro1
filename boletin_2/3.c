/* Plantee e implemente un programa en Lenguaje C que solicite por teclado dos 
números enteros y que muestre un mensaje indicando si el primero es o no 
divisible por el segundo. */
#include<stdio.h>

int main() {
    int n, m;

    printf("Introduzca el dividendo: ");
    scanf("%d", &n);
    printf("Introduzca el divisor: ");
    scanf("%d", &m); 

    if (n%m == 0)
        printf("Es divisible.\n");
    else 
        printf("No es divisible.\n");
    
    return 0;
}