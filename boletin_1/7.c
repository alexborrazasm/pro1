/* Plantee e implemente un programa en Lenguaje C que solicite el precio de un producto (sin IVA) y proporcione por pantalla el importe total del producto 
con IVA incluido. Suponga un IVA constante del 24% para todos los productos. */

#include<stdio.h>

#define IVA 0.24

int main() {
    float precio, salida;
    printf("Precio del producto (sin IVA): ");
    scanf("%f", &precio);
    
    salida = precio + (precio * IVA);

    printf("El importe total (IVA incluido) es de %.2f€\n", salida);

    return 0;
}