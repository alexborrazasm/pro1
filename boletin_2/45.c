/* Plantee e implemente un programa en Lenguaje C que calcule cuantos años tarda en doblarse un capital inicial (introducido por 
teclado), si se recibe un % de intereses al año, también determinado por el usuario a través del teclado. 
 */
#include <stdio.h>

int main() {
    double capitalInicial, capitalFinal, tasaInteres;
    int anos = 0;

    // Obtener el capital inicial y la tasa de interés del usuario
    printf("Introduce el capital inicial: ");
    scanf("%lf", &capitalInicial);

    if (capitalInicial <= 0) {
        printf("Error: El capital inicial debe ser un número positivo.\n");
        return 1;
    }

    printf("Introduce la tasa de interés anual (en porcentaje): ");
    scanf("%lf", &tasaInteres);

    if (tasaInteres < 0) {
        printf("Error: La tasa de interés no puede ser negativa.\n");
        return 1;
    }

    // Convertir la tasa de interés a decimal
    tasaInteres = tasaInteres / 100.0;

    // Calcular años hasta que el capital se duplique
    capitalFinal = capitalInicial;
    while (capitalFinal < capitalInicial * 2) {
        capitalFinal += capitalFinal * tasaInteres;
        anos++;
    }

    // Mostrar el resultado
    printf("El capital se duplicará en %d años.\n", anos);

    return 0;
}