/* Plantee e implemente un programa en que solicite el nombre, apellidos y edad
 de un usuario por teclado y que le muestre el siguiente mensaje por pantalla:
Sr/Sra. Apellido, le faltan aún X años para jubilarse */
#include<stdio.h>

#define EDADJ 67

int main() {
    // inicialización de variables
    int edad;
    char nombre[20], apellido1[20], apellido2[20];

    // entrada de datos
    printf("Introduzca usted su nombre: ");
    scanf("%s", &nombre);
    printf("Introduzca usted su primer apellido: ");
    scanf("%s", &apellido1);
    printf("Introduzca usted su segundo apellido: ");
    scanf("%s", &apellido2);
    printf("Introduzca usted su edad: ");
    scanf("%d", &edad);

    // salida de datos
    if (edad >= EDADJ)
        printf("Sr/Sra. %s %s, le faltan aún 0 años para jubilarse\n",
                apellido1, apellido2);
    else 
        printf("Sr/Sra. %s %s, le faltan aún %d años para jubilarse\n",
                apellido1, apellido2, EDADJ - edad); 
    
    return 0;
}