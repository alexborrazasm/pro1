/* Plantee e implemente un programa en Lenguaje C que a partir de un número 
entero mayor que 0 introducido por teclado obtenga la suma de los primeros n 
términos de la sucesión de Fibonacci. */
#include<stdio.h>

void askInt(const char *mensaje, int *n) {
    printf("%s", mensaje);
    scanf("%d", n);
}   // Función que pide un entero por teclado

int fibonacci(int n) {
    int resultado, a, b;

    if (n == 0 || n == 1)
        return n;
    a = 0;
    b = 1;
    for(int i = 2; i<=n; i++) {
        resultado = a + b;
        a = b;
        b = resultado;
    }
    return resultado;
}   // Función que calcula el valor de fibonacci de n y lo devuelve

int main() {
    int n, fib, suma = 0;

    askInt("Intuduzca un número mayor que 0: ", &n);

    if (n <= 0) {
        printf("ERROR, número menor que 0\n");
        return 1;
    }   // Si el número introduccido es menor o igual a 0, error

    for (int i = 0; i < n; i++) {
        fib = fibonacci(i);
        suma += fib;
    }   // Calculamos la suma de n términos de fibonacci

    printf("La suma de los %d primeros números de la succesión de fibonacci es "
           "igual a %d\n", n, suma);

    return 0;
}