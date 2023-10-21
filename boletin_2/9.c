/* Plantee e implemente un programa en Lenguaje C que implemente el algoritmo necesario para calcular la edad de una persona suponiendo que se le pide al usuario 
que introduzca su fecha de nacimiento por teclado y a la salida muestra por pantalla su edad con respecto a la fecha actual. Tenga en cuenta el cumpleaños exacto 
de la persona para realizar el cálculo. */

#include<stdio.h>
#include<time.h>

// Esto es solo para no tener que escribir la fecha y sea dinámico1
void obtenerFechaActual(int *dia, int *mes, int *año) {
    // Obtener la fecha y hora actual
    time_t tiempo_actual;
    struct tm *info_tiempo;
    time(&tiempo_actual);
    info_tiempo = localtime(&tiempo_actual);

    // Extraer el día, mes y año de la fecha actual
    *dia = info_tiempo->tm_mday;
    *mes = info_tiempo->tm_mon + 1;  // Sumamos 1 ya que enero es 0
    *año = info_tiempo->tm_year + 1900;  // Sumamos 1900 al año
}

int main() {
    int dia, mes, año, diaActual, mesActual, añoActual, edad;
    
    // Preguntamos le fecha de nacimiento
    printf("Dime tu fecha de nacimiento dd mm yyyy: ");
    scanf("%d %d %d", &dia, &mes, &año);
    
    // Obtenems la fecha actual
    obtenerFechaActual(&diaActual, &mesActual, &añoActual);

    // Mostrar la fecha en formato dd mm yyyy
    printf("Hoy es: %02d/%02d/%02d\n", diaActual, mesActual, añoActual);

5    switch (mes < mesActual) {
    case 0:
        printf("Tienes %d días\n", diaActual - dia);
        break;
    case 1:
        switch (año < añoActual) {
        case 0:
            printf("Tienes %d meses y %d días\n", mesActual - mes, diaActual - dia);
            break;
        
        case 1:
            printf("Tienes %d años, %d meses y %d días\n", añoActual - año, mesActual - mes, diaActual - dia);
            break;
        }
        break;
    }




    return 0;
}