/* Plantee e implemente un programa en lenguaje C que solicite al usuario su 
presupuesto semanal (en euros) y sus gastos diarios en distintos conceptos (por
 ejemplo transporte, alimentación y ocio) durante una semana. Calcule y muestre 
 por pantalla el gasto total de la semana, el gasto medio semanal y el gasto 
 medio diario en los distintos conceptos y el % del presupuesto semanal que gastó
  cada día. */
#include<stdio.h>

#define TAM 3 // Ojo, el string array "nombres" solo tiene 3 elementos
#define NUMDIAS 7

typedef const char *stringarray[];

float mediaArray(float v[], int n) {
    float acc = 0;
    for (int i = 0; i < n; i++) {
        acc += v[i];
    }
    return acc / n;
}

float pedirFloat(const char *mensaje, const char *nombre) {
    float n;
    printf("%s %s: ", mensaje, nombre);
    scanf("%f", &n);
    return n;
}

float gastoTotal(float array[][NUMDIAS], int n) {
    float acc = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < NUMDIAS; j++) {
            acc += array[i][j];
        }
    }
    return acc;
}

void pedirDatos(float presupuesto[], float gasto[][NUMDIAS], int n,
                 stringarray dias, stringarray nombres) { 
                // Ojo, asi n < 3 nombre debe ser modificado

    printf("A continuación introduce tu presupuesto y gastos semanales en "
          "(euros.centimos)\n");

    // Pedimos presupuestos
    for (int i = 0; i < n; i++) {
        presupuesto[i] = pedirFloat("Dime el presupuesto semanal para",
         nombres[i]);
    }

    // Pedimos gastos por día
    for (int i = 0; i < n; i++) {
        printf("\nGastos de %s:\n", nombres[i]);
        for (int j = 0; j < NUMDIAS; j++) {
            gasto[i][j] = pedirFloat("", dias[j]);
        }
    }
    puts("");
}

float gastoMedioDia(float gasto[][NUMDIAS], int n, int concepto) {
    float acc = 0;
    for (int i = 0; i < NUMDIAS; i++) {
        acc += gasto[concepto][i];
    }
    return acc/NUMDIAS;
}

void analisisSemana() {
    float presupuesto[TAM], gasto[TAM][NUMDIAS];
    stringarray dias = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes",
                         "Sabado", "Domingo"};
    stringarray nombres = {"transporte", "alimentación", "ocio"};
    float gastoSemana;

    pedirDatos(presupuesto, gasto, TAM, dias, nombres);

    // Gasto total de la semana
    gastoSemana = gastoTotal(gasto, TAM);
    printf("El gasto total de la semana es %.2f euros\n", gastoSemana);

    // Gasto medio semana
    printf("El gasto media semanal es %.2f euros\n\n", gastoSemana / NUMDIAS);

    // Gasto medio por día según que cosas
    for (int m = 0; m < TAM; m++) {
            printf("Gasto medio en %s es %.2f\n", nombres[m],
                     gastoMedioDia(gasto, TAM, m));
        }

    // Porcentaje de presupuesto semanal que se gasto cada día
    for (int m = 0; m < TAM; m++) {
        printf("\nEl %% gastado cada día en %s:\n\n", nombres[m]);
        for (int i = 0; i < NUMDIAS; i++) {
            printf("%12s %2s %5.2f%%\n",
                     dias[i], "->", (gasto[m][i]/presupuesto[m])*100);
        }
    }
    puts("");
}

int main() {
    analisisSemana();
    return 0;
}