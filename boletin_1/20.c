/* Plantee e implemente un programa en Lenguaje C que solicite a un usuario su nombre, apellidos, edad y el número de créditos matriculados  en primera, segunda 
y tercera matrícula. A continuación, debe mostrar una tabla como la que se indica donde se recoja el coste total de las asignaturas de primera, segunda y tercera 
matrícula. Suponga que el precio del crédito en primera matrícula (15.45€) se incrementa un 25% en segunda matrícula y un 50% en tercera. Incluya también el coste 
total de la matrícula del alumno. Ej de ejecución:

Nombre: Álvaro 
Apellido: Pérez 
Edad: 31 
Número de créditos en primera matrícula: 14 
Número de créditos en segunda matrícula: 15 
Número de créditos en tercera matrícula: 10

************************************************************************ 
*******                  Álvaro Pérez: 31 años                   *******  
Créditos M1   Coste M1   Créditos M2    Coste M2   Créditos M3  Coste M3 
         14     216.3€            15     289.69€            10   231.75€ 
*******                                                          ******* 
                                                   Coste Total Matrícula 
                                                                 737.74€ 
************************************************************************  */

#include<stdio.h>

#define ISEGUNDA 0.25   // incremento segunda matrícula
#define ITERCERA 0.5    // incremento tercera matrícula

int main() {
    char nombre[15], apellido[15];
    int edad, c1, c2, c3;
    float c1Precio, c2Precio, c3Precio, totalPrecio;
    float precioCredito = 15.45;

    // entrada de datos
    printf("Nombre: ");
    scanf("%s",&nombre);
    printf("Apellido: ");
    scanf("%s",&apellido);    
    printf("Edad: ");
    scanf("%d",&edad);
    printf("Número de créditos en primera matrícula: ");
    scanf("%d",&c1);
    printf("Número de créditos en segunda matrícula: ");
    scanf("%d",&c2);
    printf("Número de créditos en tercera matrícula: ");
    scanf("%d",&c3);

    // Operaciones
    c1Precio = precioCredito * c1;
    c2Precio = (precioCredito * ISEGUNDA + precioCredito) * c2;
    c3Precio = (precioCredito * ITERCERA + precioCredito) * c3;
    totalPrecio = c1Precio + c2Precio + c3Precio;

    // Salida
    printf("************************************************************************\n");
    printf("*******                  %s %s: %d años                   *******\n", nombre, apellido, edad);
    printf("Préditos M1   Coste M1   Créditos M2    Coste M2   Créditos M3  Coste M3\n");
    printf("%11d%11d%14d%12.2f%14.2f%10.2f\n", c1, c2, c3, c1Precio, c2Precio, c3Precio);
    printf("*******                                                          *******\n");
    printf("                                                   Coste Total Matrícula\n");
    printf("%71.2f€\n", totalPrecio);
    printf("************************************************************************\n");
}3