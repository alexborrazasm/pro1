/* Plantee e implemente un programa en Lenguaje C que solicite por teclado dos 
números enteros positivos (el primero de 3 cifras y el segundo de 1) y que 
muestre por pantalla su multiplicación.
Debe comprobar que el primer número tiene efectivamente 3 cifras y es positivo, 
y que el segundo número es también positivo y tiene una única cifra. 
En caso de que no se cumplan estas condiciones, el programa debe alertar al 
usuario con un mensaje apropiado Ej: “El primer número no tiene 3 cifras!!!” */
#include<stdio.h>

int pedirInt(const char *mensaje) {
    int n;
    printf("%s", mensaje);
    scanf("%d", &n);
    return n;
}

int main() {
    int n, m;
    n = pedirInt("Introduzca un número entero positivo de 3 cifras: ");
    while (n < 100 || n > 1000) {
        printf("El primer número no tiene 3 cifras!!!\n");
        n = pedirInt("Introduzca un número entero positivo de 3 cifras: ");
    }
    m = pedirInt("Introduzca un número entero positivo de 1 cifra: ");
    while (m < 1 || m > 10) {
        printf("El segundo número no tiene 1 cifras!!!\n");
        m = pedirInt("Introduzca un número entero positivo de 1 cifra: ");
    }

    printf("%11d\n%8cX %d\n%7c====\n%111d\n", n, ' ', m, ' ', n * m);
    return 0;
}