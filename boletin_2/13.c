/* Plantee e implemente un programa en Lenguaje C para clasificar triángulos en función de las longitudes de sus lados, que se solicitarán 
por teclado, de forma que se indique por pantalla si el triángulo es equilátero (todos los lados iguales), isósceles (dos lados iguales) o 
escaleno (todos los lados diferentes). */

#include<stdio.h>

int pedirInt(const char *mensaje) {
    int n;
    printf("%s", mensaje);
    scanf("%d", &n);
    return n;
}

int main() {
    int lado1, lado2, lado3;

    lado1 = pedirInt("Introduzca la longitud del primer lado del triángulo (cm): ");
    lado2 = pedirInt("Introduzca la longitud del segundo lado del triángulo (cm): ");
    lado3 = pedirInt("Introduzca la longitud del tercer lado del triángulo (cm): ");

    if (lado1 == lado2 == lado3) 
        printf("El triángulo es EQUILÁTERO (lado1 = lado2 = lado3= %d cm)\n", lado1);
    else if (lado1 == lado2)
        printf("El triángulo es ISÓSCELES (lado1 = lado2= %d cm)\n", lado1);
    else if (lado1 == lado3)
        printf("El triángulo es ISÓSCELES (lado1 = lado3= %d cm)\n", lado1);
    else if (lado2 == lado3)
        printf("El triángulo es ISÓSCELES (lado2 = lado3= %d cm)\n", lado2);
    else
        printf("El triángulo es ESCALENO (%d != %d != %d cm)\n", lado1, lado2, lado3);

    return 0;
}