/* Plantee e implemente un programa en LENGUAJE Cpara controlar la compra diaria. El programa debe pedir los kilos de patatas comprados y su precio sin IVA, 
los kilos de manzanas comprados y su precio sin IVA y cuánto ha pagado por un libro que se ha comprado, sin IVA. Suponga que el IVA de los productos alimenticios 
es del 21% y de los productos de cultura 10%. Muestre por pantalla el importe de cada producto y el importe total de la compra según se indica en el ejemplo:

Kg de patatas comprados: 7 
Precio sin IVA del kilo de patatas (en euros): 0.69 
Kg de manzanas comprados: 4 
Precio sin IVA del kilo de manzanas (en euros): 1.23 
Importe del libro sin IVA (euros): 19 
 
---------------------------------------------------------------------------------------Ticket 1/1 
 Patatas                7 kg                 0.69€                4.83€          5.84€  (IVA 21%) 
Manzanas                4 kg                 1.23€                4.92€          5.95€  (IVA 21%) 
   Libro                   1                   19€                  19€         20.90€  (IVA 10%) 
------------------------------------------------------------------------------------------------- 
TOTAL                                                                           32.69€             */

#include<stdio.h>

int main() {
    int kgPatatas, kgManzanas;
    float precioKgPatatas, precioKgManzanas, precioPatatas, precioManzanas, precioPatatasIVA, precioManzanasIVA, precioLibro, precioLibroIVA, total;
    float ivaAlimentos = 0.21;
    float ivaCultura = 0.1;

    printf("Kg de patatas comprados: ");
    scanf("%d", &kgPatatas);
    printf("Precio sin IVA del kilo de patatas (en euros): ");
    scanf("%f", &precioKgPatatas);
    printf("Kg de manzanas comprados: ");
    scanf("%d", &kgManzanas);
    printf("Precio sin IVA del kilo de manzanas (en euros): ");
    scanf("%f", &precioKgManzanas);
    printf("Importe del libro sin IVA (euros): ");
    scanf("%f", &precioLibro);

    // Cálculos

    precioPatatas = precioKgPatatas * kgPatatas;
    precioPatatasIVA = precioPatatas * ivaAlimentos + precioPatatas;

    precioManzanas = precioKgManzanas * kgManzanas;
    precioManzanasIVA = precioManzanas * ivaAlimentos + precioManzanas;

    precioLibroIVA = precioLibro * ivaCultura + precioLibro;

    total = precioPatatasIVA + precioManzanasIVA + precioLibroIVA;

    printf("---------------------------------------------------------------------------------------Ticket 1/1\n");
    printf(" Patatas%18d Kg%18.2f€%18.2f€%19.2f€ (IVA 21%)\n", kgPatatas, precioKgPatatas, precioPatatas, precioPatatasIVA);
    printf("Manzanas%18d Kg%18.2f€%18.2f€%19.2f€ (IVA 21%)\n", kgManzanas, precioKgManzanas, precioManzanas, precioManzanasIVA);
    printf("   Libro%21d %17.2f€%18.2f€%19.2f€ (IVA 10%)\n", 1, precioLibro, precioLibro, precioLibroIVA);
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("TOTAL%81.2f€\n", total);

    return 0;
}