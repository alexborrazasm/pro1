/* Plantee e implemente un programa en lenguaje C que, partiendo de la estructura
 creada en el ejercicio anterior, cree un sistema para almacenar las temperaturas 
(en ºC) registradas en una ciudad durante una semana (hora a hora cada día) 
Introduzca las temperaturas solicitando los datos apropiadamente al usuario. 
Calcule y muestre por pantalla las temperaturas medias diarias, las temperaturas
 medias de cada hora y la temperatura media semanal. */
#include<stdio.h>
#include<limits.h>

#define HORAS 23
#define DIAS 7

float mediaV(float v[], int n) {
    float acc = 0;
    for (int i = 0; i < n; i++) {
        acc += v[i];
    }
    return acc / n;
}

float mediaHoras(float v[][HORAS], int hora, int dias) {
    float acc = 0;
    for (int i = 0; i < dias; i++) {
        acc += v[i][hora];
    }
    return acc / dias;
}

float mediaMatriz(float v[][HORAS], int fila, int col) {
    float acc = 0;
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < col; j++) {
            acc += v[i][j];
        }
    }
    return acc / (fila*col);
}

void rellenarV(float v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d:00 -> ", i+1);
        scanf("%f", &v[i]);
    }
}

void printHoras(float v[], int n) {
    for (int i = 0; i < n; i++) {
        if (i == 6 || i == 12 || i == 18) {
            puts("");
        }
        printf("|%3d:00 -> %5.2f Cº ", i, v[i]);
    }
    puts("");
}

void tempDia() {
    float temps[DIAS][HORAS];

    for (int i = 0; i < DIAS; i++) {
        printf("\nDía %d:\nDime las temperaturas (ºC) según la hora:\n", i+1);
        rellenarV(temps[i], HORAS);
    }
    
    printf("\nTemperaturas registradas:\n");
    for (int i = 0; i < DIAS; i++) {
        printf("\nDía %d\n", i+1);
        printHoras(temps[i], HORAS);
        // Temperatura media
        printf("La temperatura media ha sido %.2fº C\n", 
                mediaV(temps[i], HORAS));
    }

    for (int i = 0; i < HORAS; i++) {
        // Media de cada hora
        printf("La temperatura media de las %d:00 ha sido %.2fº C\n",
                i, mediaHoras(temps, i, DIAS));
    }
    
    // Media semanal
    printf("\nLa temperatura media de la semana ha sido %.2fº C\n",
             mediaMatriz(temps, DIAS, HORAS));
}

int main() {
    tempDia();
    return 0;
}