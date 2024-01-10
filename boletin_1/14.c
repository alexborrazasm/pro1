/* Plantee e implemente un programa en Lenguaje C que a partir de la temperatura máxima y mínima diaria de una ciudad en grados Fahrenheit (introducidas por 
teclado) proporcione dichas temperaturas en grados centígrados por pantalla. Contemple una salida ordenada en forma de tabla. */

#include<stdio.h>

int main() {
    float minCelsius, maxCelsius;
    int minFahr, maxFahr;
    char ciudad[10];

    printf("Introduzca el nombre de su ciudad : ");
    scanf("%s", &ciudad);
    printf("Introduzca la temperatura máxima en grados Fahrenheit: ");
    scanf("%d", &maxFahr);
    printf("Introduzca la temperatura mínima en grados Fahrenheit: ");
    scanf("%d", &minFahr);

    minCelsius = (5.0/9.0) * (minFahr - 32);
    maxCelsius = (5.0/9.0) * (maxFahr - 32);

    printf("--------------------------------------------------%s 30/09/2023--------------------------------------------------\n", ciudad);
    printf("\t\tTMax (ºF)\t\tTMin (ºF)\t\tTMax (ºC)\t\tTMin (ºC)\n");    
    printf("%22d ºF%21d ºF%21.2f ºC%21.2fº C\n", maxFahr, minFahr, maxCelsius, minCelsius);
    printf("-------------------------------------------------------------------------------------------------------------------\n");

    return 0;
}
