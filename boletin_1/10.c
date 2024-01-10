/* Plantee e implemente un programa en Lenguaje C que calcule el producto escalar de dos vectores en el espacio euclídeo. */

#include<stdio.h>

int main() {
    int x1, x2, y1, y2, z1, z2, productoEscalar;

    printf("Coordenadas cartesianas primer vector (separadas por espacio): ");
    scanf("%d %d %d", &x1, &y1, &z1);
    printf("Coordenadas cartesianas segundo vector (separadas por espacio): ");
    scanf("%d %d %d", &x2, &y2, &z2);

    productoEscalar = x1 * x2 + y1 * y2 + z1 * z2;

    printf("Producto escalar: %d\n", productoEscalar); 

    return 0;
}