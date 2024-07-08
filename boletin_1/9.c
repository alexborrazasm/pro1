/* Plantee e implemente un programa en Lenguaje C que solicite el nombre, edad, 
número de hijos y sueldo anual de una persona (en euros) y muestre por pantalla 
la misma información indicando su sueldo mensual en vez del sueldo anual. */
#include<stdio.h>

int main() {
    char nombre[20];
    int edad, hijos;
    float salarioAnual, salarioMensual;

    printf("Introduzca usted su nombre: ");
    scanf("%s", &nombre);
    printf("Introduzca usted su edad: ");
    scanf("%d", &edad);
    printf("Introduzca usted su número de hijos: ");
    scanf("%d", &hijos);
    printf("Introduzca usted su sueldo anual (en euros): ");
    scanf("%f", &salarioAnual);

    salarioMensual = salarioAnual / 12;

    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Número de hijos: %d\n", hijos);
    printf("Sueldo mensual: %.2f€\n", salarioMensual);

    return 0;
}