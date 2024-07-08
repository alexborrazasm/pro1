/* Plantee e implemente un programa en Lenguaje C que acepte valores enteros 
como entrada (por teclado) y que muestre por pantalla la suma de los valores 
introducidos. El programa terminará cuando el usuario introduzca un 0. */
#include<stdio.h>

int main() {
    int n, a;

    a = 0;

    printf("A continuación introduzca los números enteros de los que desee "
           "calcular la suma separados por espacios: (0 para terminar)\n");

    do {
        scanf("%d", &n);
        a += n;
    } while (n != 0);
    
    printf("La suma de los números introducidos es %d\n", a);

    return 0;
}