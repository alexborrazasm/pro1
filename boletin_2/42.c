/*  Plantee e implemente un programa en Lenguaje C que de pase de euros (€) a dólares ($USA). El programa admitirá un tipo de cambio razonable, esto es, no 
negativo ni excesivamente grande. */
#include<stdio.h>

#define cambio 1.0855074 

int main() {
    float entrada, salida;
    
    while (1) {
        printf("Euros: ");
        scanf("%f", &entrada);
        if (entrada >= 0 && entrada < 10000000) {
            break;
        }
        printf("Error, vuelva a introducir el número un rango con sentido\n");
    }

    salida = cambio * entrada;

    printf("Dolares: %.2f\n", salida);

    return 0;
}