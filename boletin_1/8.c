/* Plantee e implemente un programa en Lenguaje C que solicite al usuario su nombre, edad y lo que se ha gastado en cañas y en transporte durante una semana 
(en euros) y muestre por pantalla esos mismos datos y la suma de los gastos. */

#include<stdio.h>

int main() {
    char nombre[20];
    int edad;
    float cañas, transporte, total;

    printf("Introduzca usted su nombre: ");
    scanf("%s", &nombre);
    printf("ntroduzca usted su edad: ");
    scanf("%d", &edad);
    printf("Introduzca usted el total de sus gastos semanales en cañas (en euros): ");
    scanf("%f", &cañas);
    printf("Introduzca usted el total de sus gastos semanales en transporte (en euros): ");
    scanf("%f", &transporte);

    total = transporte + cañas;

    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Gasto semanal en cañas: %.2f€\n", cañas);
    printf("Gasto semanal en transporte: %.2f€\n", transporte);
    printf("Total gastos semanales: %.2f€\n", total);
    
    return 0;
}
