/* Plantee e implemente un programa en Lenguaje C que solicite por teclado la base y altura de un triángulo rectángulo y muestre por pantalla su superficie.
Presente la salida con el siguiente formato:
La superficie del triángulo de base XX.XX y altura YY.YY es ZZ.ZZ */

#include<stdio.h>

int main() {
    float base, h, superficie;

    printf("Dime la longitud de la base: ");
    scanf("%f", &base);
    printf("Dime la altura: ");
    scanf("%f", &h);

    superficie = (base * h) / 2;

    printf("La superficie del triángulo de base %.2f y altura %.2f es %.2f\n", base, h , superficie);
    return 0;
}
