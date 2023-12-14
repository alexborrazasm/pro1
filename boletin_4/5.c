/* Plantee e implemente un programa en lenguaje C para almacenar las temperaturas (en ºC) registradas en una ciudad durante un día 
hora a hora (0-23). Introduzca las temperaturas a partir de los datos proporcionados por el usuario, visualice ordenadamente las 
temperaturas registradas y calcule y muestre por pantalla la temperatura máxima, mínima y media alcanzadas.
*/
#include<stdio.h>
#include<limits.h>

#define TAM 23

float mediaV(float v[], int n) {
    float acc = 0;
    for (int i = 0; i < n; i++) {
        acc += v[i];
    }
    return acc / n;
}

float maxV(float v[], int n) {
    float max = INT_MIN, salida = 0;
    for (int i = 0; i < n; i++) {
        if (max < v[i]) {
            max = v[i];
            salida = i;
        }
    }
    return salida;
}

float minV(float v[], int n) {
    float min = INT_MAX, salida = 0;
    for (int i = 0; i < n; i++) {
        if (min > v[i]) {
            min = v[i];
            salida = i;
        }
    }
    return salida;
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
    float temps[TAM];
    int maxi, mini;

    printf("Dime las temperaturas (ºC) según la hora:\n");
    rellenarV(temps, TAM);
    printf("\nTemperaturas registradas:\n");
    printHoras(temps, TAM);
    // Temperatura máxima
    maxi = maxV(temps, TAM);
    printf("\nLa temperatura máxima ha sido %.2fº C a las %d:00\n", temps[maxi], maxi);
    // Temperatura mínima
    mini = minV(temps, TAM);
    printf("La temperatura mínima ha sido %.2fº C a las %d:00\n", temps[mini], mini);
    // Temperatura media
    printf("La temperatura media ha sido %.2fº C\n", mediaV(temps, TAM));
}

int main() {
    tempDia();
    return 0;
}