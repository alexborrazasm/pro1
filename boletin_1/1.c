/* Plantee e implemente un programa en lenguaje C que solicite el nombre y la 
edad de un usuario por teclado de forma que el ordenador le salude indicándole
 la edad que tiene.*/
#include<stdio.h>

int main() {
    // inicialización de variables
    int edad;
    char nombre[20];

    // entrada de datos
    printf("Introduzca usted su nombre: ");     // pedimos al usuario su nombre
    scanf("%s", &nombre);
    printf("Introduzca usted su edad: ");       // pedimos al usuario su edad
    scanf("%d", &edad);

    // salida de datos
    printf("¡Buenos días %s, tiene usted %d años!\n", nombre, edad);
    
    return 0;
}
