/* Plantee e implemente un programa en Lenguaje C que calcule la nota media de 
las 6 asignaturas de un curso académico a partir de las calificaciones 
introducidas individualmente por teclado. Debe mostrar la calificación media 
también en formato SOBRESALIENTE (9-10), NOTABLE (7-8.9), APROBADO (5-6.9), 
SUSPENSO (0-4.9). En el caso de que el alumno no se haya presentado a alguna de 
las asignaturas, el usuario debe introducir 0 como calificación. En este último 
caso añada además en la salida la nota media obtenida en las asignaturas a las 
que se ha presentado. */
#include<stdio.h>
#include<string.h>

float entradaFloat (int n) {
    float m;
    printf("Introduzca calificación asignatura %d (formato X.X, 0 para No"
    " Presentado): ", n);
    scanf("%f", &m);
    if (m < 0 || 10 < m ) {
        printf("Error, fuera de rango.\n");
        return entradaFloat(n);
    }
    return m;
}

void calcularRangoNota(char rango[], float nota) {
    if (nota < 5.)
        strcpy(rango, "SUSPENSO");
    else if (nota < 7.)
        strcpy(rango, "APROBADO");
    else if (nota < 9.)
        strcpy(rango, "NOTABLE");
    else
        strcpy(rango, "SOBRESALIENTE");
}

int main() {
    float nota, notaEntrada, notaMedia;
    int i, np;
    char rNota[20];
    nota = 0;

    for(i = 0; i < 6; i++) {
        notaEntrada = entradaFloat(i+1);
        nota = nota + notaEntrada;
        if (notaEntrada == 0)
            np++;
    }

    notaMedia = nota / 6;
    calcularRangoNota(rNota, notaMedia);
    printf("Nota media: %s (%.2f)\n", rNota, notaMedia);

    if (np != 0) {
        notaMedia = nota / (6 - np);
        calcularRangoNota(rNota, notaMedia);
        printf("Nota media asignaturas presentadas: %s %.2f\n",
                rNota, notaMedia);
    }

    return 0;
}