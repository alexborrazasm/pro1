/* Plantee e implemente un programa en lenguaje C que almacene en memoria las 
horas de estudio que dedica un alumno a una asignatura determinada durante una 
semana. Solicite los datos apropiadamente al usuario y calcule y muestre la media
 de horas diarias empleadas en esa asignatura, asimismo indique el día en el que
 ha estado más aplicado (mayor número de horas estudiando) y más vago (menor 
 número de horas estudiando). */
#include <stdio.h>
#include <limits.h>

#define TAM 7

void queDia(const int n) {
    const char *dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes",
                         "Sábado", "Domingo"};
    printf("%s: ", dias[n]);
}

void rellenarV(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Horas de estudio de ");
        queDia(i);
        scanf("%d", &v[i]);
        // Check entrada
        while (v[i] < 0 || v[i] > 24) {
            printf("ERROR, rango valido 0-24, horas: ");
            scanf("%d", &v[i]);
        };
    }
}

float mediaV(int v[], int n) {
    float acc = 0;
    for (int i = 0; i < n; i++) {
        acc += v[i];
    }
    return acc / n;
}

int maxV(int v[], int n) {
    int max = INT_MIN, salida = 0;
    for (int i = 0; i < n; i++) {
        if (max < v[i]) {
            max = v[i];
            salida = i;
        }
    }
    return salida;
}

int minV(int v[], int n) {
    int min = INT_MAX, salida = 0;
    for (int i = 0; i < n; i++) {
        if (min > v[i]) {
            min = v[i];
            salida = i;
        }
    }
    return salida;
}

void analisisEstudio() {
    int horas[TAM];
    int imax, imin;

    // Pedir horas
    rellenarV(horas, TAM);
    printf("\n****************ANALISIS DE LAS HORAS DE ESTUDIO SEMANALES"
            "****************\n");

    // Media de horas
    printf("La media de horas de estudio ha sido %.2f\n", mediaV(horas, TAM));

    // Día con menos horas
    imin = minV(horas, TAM);
    printf("El día que has estado más vago ha sido el ");
    queDia(imin);
    printf("%d horas\n", horas[imin]);

    // Día con más horas
    imax = maxV(horas, TAM);
    printf("El día que has estado más aplicado ha sido el ");
    queDia(imax);
    printf("%d horas\n", horas[imax]);
    printf("*******************************FIN ANALISIS*****************
            "**************\n\n");
}

int main() {
    analisisEstudio();
    return 0;
}