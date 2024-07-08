/* Plantee e implemente un programa en Lenguaje C que solicite por teclado los
 lados de un rectángulo y muestre por pantalla su superficie. */
#include<stdio.h>

int main() {
    float base, h, superficie;

    printf("Dime la longitud de la base: ");
    scanf("%f", &base);
    printf("Dime la altura: ");
    scanf("%f", &h);

    superficie = base * h;

    printf("La superficie del rectángulo de base %.2f y altura %.2f es %.2f\n",
             base, h , superficie);

    return 0;
}