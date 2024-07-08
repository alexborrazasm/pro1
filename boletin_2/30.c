/* Plantee e implemente un programa en Lenguaje C que reciba números enteros por
 teclado y al terminar indique cuánto vale la suma de los números pares y los 
 impares por separado. La entrada de números terminará cuando se introduzca un 
 cero. */
#include<stdio.h>

int main() {
    int num;
    int pares = 0;
    int impares = 0;

    printf("A continuación introduzca los números enteros de los que desee "
            "calcular la suma separados por espacios: (0 para terminar)\n");

    while(1) {
        scanf("%d", & num);
        if (num == 0)
            break;
        if ((num % 2) == 0)
            pares += num;
        else impares += num;
    }

    printf("Suma de pares: %d\nSuma de impares: %d\n", pares, impares);

    return 0;
}