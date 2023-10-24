/*  Plantee e implemente un programa en Lenguaje C que sume los primeros 100 números enteros. Realícelo con cada uno de los tres bucles. */

#include<stdio.h>

int main() {
    int i, c = 0;

    for (i = 1; i <= 100; i++) {
        c += i;
    }

    printf("Bucle for = %d\n", c);
    
    c = 0;
    i = 1;

    while (i <= 100) {
        c += i;
        i++;
    }

    printf("Bucle while = %d\n", c);

    c = 0;
    i = 1;

    do {
        c += i;
        i++;
    } while (i <= 100);

    printf("Bucle do while = %d\n", c);
    
    return 0;
}