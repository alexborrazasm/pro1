/* Plantee e implemente un programa en Lenguaje C que sume los primeros 100 
números enteros pares por una parte y los impares por otra. */
#include<stdio.h>

int main() {
    int pares = 0;
    int impares = 0;

    for(int i = 0; i < 201; i++)
        if (i % 2 == 0)
            pares += i;
        else
            impares += i;

    printf("Suma de los primeros 100 números pares es igual a %d\n", pares);
    printf("Suma de los primeros 100 números impares es igual a %d\n", impares);
    
    return 0;
}