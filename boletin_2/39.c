/*  Plantee e implemente un programa en Lenguaje C de generación de quinielas de
forma aleatoria. El programa deberá mostrar en pantalla tantas quinielas como 
desee el usuario; se considera que todos los resultados son igualmente probables.
El número máximo de quinielas generables simultáneamente es de 10. Las quinielas
se mostrarán en pantalla del modo habitual, esto es, ordenadas por filas (partidos)
 y columnas (resultados). 
Las  opciones  del  programa  serán: 
I)ndicar número de quinielas
M)ostrar quinielas
S)alir.  
No se podrán mostrar las quinielas sin haber indicado previamente el número de 
quinielas deseado. 

Las opciones de la quiniela son equipo local ganará (1), si habrá un empate (X),
 o si el equipo visitante ganará (2)filas (partidos) y columnas (resultados) 15 
 partidos */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAXQ 10
#define PARTIDOS 15

void menu() {       // Función que imprime las opciones de un menú
    printf("I)ndicar número de quinielas\n");
    printf("M)ostrar quinielas\n");
    printf("S)alir\n");
}

void askInt(const char *mensaje, int *n) {  
    printf("%s", mensaje);
    scanf("%d", n);
}  // Función que pide por teclado un entero

char resultadoQ() {     
    int n = rand() % 3;
    char salida;
    if (n == 1)
        salida = '1';
    else if (n == 2)
        salida = '2';
    else
        salida = 'X';
    return salida;
}  // Función que nos da el resultado de la quiniela 1, x o 2

void generarQ(int nQuinielas) {     // Función que rellena quinienas
    printf("%13c", ' ');
    for(int n = 1; n <= nQuinielas; n++) {
            printf("%4d", n);
    }
    printf("\n");
    printf("-------------");
    for(int m = 0; m < nQuinielas; m++) {
        printf("----");
    }
    printf("\n");
    for(int i = 1; i <= PARTIDOS; i++) {
        printf("Resultado%3d|", i);
        for(int j = 0; j < nQuinielas; j++) {
            printf("%4c", resultadoQ());
        }
        printf("\n");
    }
}

int main() {
    int nQ = 0;

    /* Inicializamos la semilla con la hora del sistema para general enteros 
    pseudo-aleatorios */

    srand(time(NULL)); 
    
    while (1) {
        menu();
        printf("Opción: ");
        switch(getchar()) {
            case 'I': case 'i':
                askInt("Ingrese el número de quinielas: ", &nQ);
                if (nQ <= 0) {
                    printf("Error, introduzca un número mayor que 0\n");
                    nQ = 0;
                }
                else if ( nQ > MAXQ ) {
                    printf("Error, en número máximo de quinielas es %d\n", MAXQ);
                    nQ = 0;
                }
                break;
            case 'M': case 'm':
                if (nQ == 0) {
                    printf("Error, primero indique el número de quinielas\n");
                    break;
                }
                generarQ(nQ);
                break;
            case 'S': case 's':
                printf("Saliendo del programa\n");
                return 0;
            default:
                printf("Error, opción no válida\n");      
                break;
        }
        while(getchar() != '\n') {} 
    }
}