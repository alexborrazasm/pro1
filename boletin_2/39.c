/*  Plantee e implemente un programa en Lenguaje C de generación de quinielas de forma aleatoria. El programa deberá mostrar en pantalla tantas 
quinielas como desee el usuario; se considera que todos los resultados son igualmente probables. El número máximo de quinielas generables 
simultáneamente es de 10. Las quinielas se mostrarán en pantalla del modo habitual, esto es, ordenadas por filas (partidos) y columnas (resultados). 
Las  opciones  del  programa  serán: 
I)ndicar número de quinielas
M)ostrar quinielas
S)alir.  
No se podrán mostrar las quinielas sin haber indicado previamente el número de quinielas deseado. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu() {
    printf("I)ndicar número de quinielas\n");
    printf("M)ostrar quinielas\n");
    printf("S)alir\n");
}

void askInt(const char *mensaje, int *n) {
    printf("%s", mensaje);
    scanf("%d", n);
}

void generarQ(int n) {
    printf("Por hacer\n");
}

int main() {
    int nQ = 0;

    srand(time(NULL)); // Inicializamos la semilla para general enteros pseudo-aleatorios

    while (1) {
        menu();
        printf("Opción: ");
        switch(getchar()) {
            case 'I':
                askInt("Ingrese el número de quinielas: ", &nQ);
                if (nQ <= 0) {
                    printf("Error, introduzca un número mayor que 0\n");
                    nQ = 0;
                    break;
                }
                break;
            case 'M':
                if (nQ == 0) {
                    printf("Error, primero indique el número de quinielas\n");
                    break;
                }
                generarQ(nQ);
                break;
            case 'S':
                printf("Saliendo del programa\n");
                return 0;
            default:
                printf("Error, opción no válida\n");      
                break;
        }
        while (getchar() != '\n') {} 
    }
    
    return 0;
}