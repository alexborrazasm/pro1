/* Plantee e implemente un programa en Lenguaje C que solicite al usuario una 
fecha del año en curso y le muestre en el centro de la pantalla(aproximadamente)
 el número de días transcurridos desde el comienzo de año hasta esa fecha. */
#include<stdio.h>

int main() {
    int dia, mes, totalDias, i;

    printf("Escriba una fecha del año 2023 (dd mm): ");
    scanf("%d %d", &dia , &mes);
    totalDias = 0;

    for (i = 1; i<mes; i++) {       // recorremos todos los meses que pasaron
        printf("hola %d", i);
        switch (i) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:   // 31 días
            totalDias +=31;
            printf("Caso 1\t%d\n",totalDias);
            break;
        case 4: case 6: case 9: case 11:    // 30 días
            totalDias +=30;
            printf("Caso 2\t%d\n",totalDias);
            break;
        case 2:     // febrero 28 días
            totalDias +=28;
            printf("Caso 3\t%d\n",totalDias);
            break;
        }
    }      

    totalDias += dia;   // sumamos los días del mes actual

    printf("%60cLa fecha introducida corresponde al día %d del año en curso\n",
            ' ', totalDias);
    
    return 0;
}