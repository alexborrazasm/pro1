/* Plantee e implemente un programa en Lenguaje C que muestre por pantalla una lista de los años bisiestos en el siglo XIX, espere a que el 
usuario pulse una tecla y muestre los correspondientes al siglo XX. */

#include<stdio.h>

int main() {
    int i;

    // Imprimimos los años bisiestos del siglo XIX
    printf("Lista de años bisiestos del siglo XIX:\n");
    for (i = 1801; i < 1901; i++) {
        if ((i % 4) == 0)
            printf("%d\t", i);
    }
    printf("\n");

    // Esperamos a que el usuario introduzca algo
    while (1) {
        if (getchar() != EOF)
            break;    
    }

    // Imprimimos los años bisiestos del siglo XX
    printf("Lista de años bisiestos del siglo XIX:\n");
    for (i = 1901; i < 2001; i++) {
        if ((i % 4) == 0)
            printf("%d\t", i);
    }
    printf("\n");
    
    return 0;
}