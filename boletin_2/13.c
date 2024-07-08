/* Plantee e implemente un programa en Lenguaje C para clasificar triángulos en 
función de las longitudes de sus lados, que se solicitarán por teclado, de forma
 que se indique por pantalla si el triángulo es equilátero (todos los lados 
 iguales), isósceles (dos lados iguales) o escaleno (todos los lados diferentes)
*/
#include<stdio.h>

int pedirInt(const char *mensaje) {
    int n;
    printf("%s", mensaje);
    scanf("%d", &n);
    return n;
}

int main() {
    int x, y, z;

    x = pedirInt("Introduzca la longitud del primer lado del triángulo (cm): ");
    y = pedirInt("Introduzca la longitud del segundo lado del triángulo (cm): ");
    z = pedirInt("Introduzca la longitud del tercer lado del triángulo (cm): ");

    if (x == y == z) 
        printf("El triángulo es EQUILÁTERO (lado1 = lado2 = lado3= %d cm)\n", x);
    else if (x == y)
        printf("El triángulo es ISÓSCELES (lado1 = lado2= %d cm)\n", x);
    else if (x == z)
        printf("El triángulo es ISÓSCELES (lado1 = lado3= %d cm)\n", x);
    else if (y == z)
        printf("El triángulo es ISÓSCELES (lado2 = lado3= %d cm)\n", y);
    else
        printf("El triángulo es ESCALENO (%d != %d != %d cm)\n", x, y, z);

    return 0;
}