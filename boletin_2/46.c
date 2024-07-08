/* Plantee e implemente un programa en Lenguaje C  muestre por pantalla la tabla
 de multiplicación en el formado dado. */
#include<stdio.h>

int main() {
    int i, j;

    printf(" \t");

    for(i = 1; i < 10; i++) {
        printf("%d\t", i);
    }
    puts("");

    for (i = 1; i < 10; i++) {
        printf("%d\t", i);
        for ( j = 1; j <= i; j++) {
            printf("%d\t", i * j);
        }
            puts("");
    }
    
    for(i = 1; i < 10; i++) {
        printf("_________");
    }
    puts("");

    return 0;
}