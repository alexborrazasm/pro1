/* Plantee e implemente un programa en LENGUAJE Cpara controlar la compra diaria.
El programa debe pedir los kilos de patatas comprados y su precio sin IVA, los 
kilos de manzanas comprados y su precio sin IVA y cuánto ha pagado por un libro 
que se ha comprado, sin IVA. Suponga que el IVA de los productos alimenticios es
 del 21% y de los productos de cultura 10%. Muestre por pantalla el importe de 
 cada producto y el importe total de la compra según se indica en el ejemplo:

Kg de patatas comprados: 7 
Precio sin IVA del kilo de patatas (en euros): 0.69 
Kg de manzanas comprados: 4 
Precio sin IVA del kilo de manzanas (en euros): 1.23 
Importe del libro sin IVA (euros): 19 
 
-------------------------------------------Ticket 1/1 
 Patatas    7 kg    0.69€   4.83€    5.84€  (IVA 21%) 
Manzanas    4 kg    1.23€   4.92€    5.95€  (IVA 21%) 
   Libro    1       19€     19€     20.90€  (IVA 10%) 
-----------------------------------------------------
TOTAL                               32.69€
*/
#include<stdio.h>

#define IVACUL 0.1
#define IVAAL 0.21

int main() {
    int kgPatatas, kgManzanas, precioLibro;
    float precioKgPatatas, precioKgManzanas, precioPatatas, precioManzanas, 
    precioPatatasIVA, precioManzanasIVA, precioLibroIVA, total;

    printf("Kg de patatas comprados: ");
    scanf("%d", &kgPatatas);
    printf("Precio sin IVA del kilo de patatas (en euros): ");
    scanf("%f", &precioKgPatatas);
    printf("Kg de manzanas comprados: ");
    scanf("%d", &kgManzanas);
    printf("Precio sin IVA del kilo de manzanas (en euros): ");
    scanf("%f", &precioKgManzanas);
    printf("Importe del libro sin IVA (euros): ");
    scanf("%d", &precioLibro);

    // Cálculos

    precioPatatas = precioKgPatatas * kgPatatas;
    precioPatatasIVA = precioPatatas * IVAAL + precioPatatas;

    precioManzanas = precioKgManzanas * kgManzanas;
    precioManzanasIVA = precioManzanas * IVAAL + precioManzanas;

    precioLibroIVA = precioLibro * IVACUL + precioLibro;

    total = precioPatatasIVA + precioManzanasIVA + precioLibroIVA;

    printf("-------------------------------------------Ticket 1/1\n"
           " Patatas    %d kg    %.2f€   %.2f€    %.2f€  (IVA 21%)\n"
           "Manzanas    %d kg    %.2f€   %.2f€    %.2f€  (IVA 21%)\n"
           "   Libro    1       %d€     %d€     %.2f€  (IVA 10%)\n"
           "TOTAL                               %.2f€\n",
           kgPatatas, precioKgPatatas, precioPatatas, precioPatatasIVA,
           kgManzanas, precioKgManzanas, precioManzanas, precioManzanasIVA,
           precioLibro, precioLibro, precioLibroIVA,
           total);

    return 0;
}