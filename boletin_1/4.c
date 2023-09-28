/* Plantee e implemente un programa en Lenguaje C que solicite por teclado los lados de un rectángulo y muestre por pantalla su perímetro. Presente la salida con el siguiente formato:
El perímetro del rectángulo de base XX.XX y altura YY.YY es ZZ.ZZ */

#include<stdio.h>

int main() {
    float base, h, perimetro;

    printf("Dime la longitud de la base: ");
    scanf("%f", &base);
    printf("Dime la altura: ");
    scanf("%f", &h);

    perimetro = base * 2 + h * 2;

    printf("El perímetro del rectángulo de base %.2f y altura %.2f es %.2f\n", base, h , perimetro);
    return 0;
}