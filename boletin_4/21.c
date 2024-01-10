/* Diseñe la estructura de datos que permita almacenar en memoria la lista de tareas a realizar durante los días del año. Se debe de poder controlar la fecha, 
la descripción de tareas a realizar cada día con su hora y minutos. Tenga en cuenta que cada día no podrá tener más de 20 tareas. */
#include <stdio.h>

#define TAM 100
#define DIA 365
#define NTAREAS 20

struct tarea {
    int dia;
    int mes;
    int anho;
    char descripcion [TAM];
    int horas;
    int minutos;
};

void leerDatos (struct tarea t [][NTAREAS]);

int main (){
    struct tarea t [DIA][NTAREAS];

    leerDatos (t);
    
    return 0;
}

void leerDatos (struct tarea t [][NTAREAS]){
    int i = 0;
    int numTareas;
    int respuesta = 1;

    printf ("----------------------------------------------\n");
    printf ("LISTA DE TAREAS A REALIZAR DURANTE EL AÑO\n");
    printf ("----------------------------------------------");

    while (respuesta) {
        printf ("\nIntroduzca la fecha (dd/mm/aaaa): ");
        scanf ("%d/%d/%d", &t[i][0].dia, &t[i][0].mes, &t[i][0].anho);

        do {
            printf ("Introduzca el numero de tareas para el dia %d/%d/%d (<=20): ",  t[i][0].dia, t[i][0].mes, t[i][0].anho);
            scanf ("%d", &numTareas);
        } while (numTareas <= 0 || numTareas > 20);

        for (int j = 0; j < numTareas; j++){
            printf ("\nTAREA %d\n", j+1);
            printf ("Introduzca la descripcion (nombre): ");
            while(getchar() != '\n');
            fgets (t[i][j].descripcion, TAM, stdin);
            printf ("Introduzca las horas y minutos (horas:minutos): ");
            scanf ("%d:%d", &t[i][j].horas, &t[i][j].minutos);
        }

        i++;

        printf ("\nDesea seguir introduciendo tareas para otros dias? (SI (1); NO (0)): ");
        scanf ("%d", &respuesta);
    }
}