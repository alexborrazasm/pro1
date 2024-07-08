/* Plantee e implemente un programa en Lenguaje C que muestre por pantalla tres 
números enteros introducidos por teclado ordenados de menor a mayor.  */
#include<stdio.h>

int main() {
    int a, b, c, temp;
    
    printf("Introduzca tres números enteros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    
    printf("El primer número es: %d\n", a);
    printf("El segundo número es: %d\n", b);
    printf("El tercer número es: %d\n", c);

    printf("%35d <= %d <= %d\n", a, b, c);
    
    return 0;
}
