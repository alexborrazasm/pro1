/* Plantee e implemente un programa en Lenguaje C que proporcione un valor aproximado del número e a partir del siguiente 
desarrollo  de  Taylor  con  error menor de 0,0001 */

#include <stdio.h>
#include <math.h>

#define ERROR 0.0001f

int main() {
    double aproximacion, real, fact; // 'double' porque en la formula pueden salir valores muy altos
    int x, cnt;

    printf("Introduzca el valor de x para calcular e^x: ");
    scanf ("%d", &x);

    fact = cnt = aproximacion = 1;

    real = expf(x); //e^x

    while (fabs(aproximacion - real) > ERROR ){// 'fabs' funcion valor absoluto
        printf ("%4d) | Real: %12.4f | Aproximación: %12.4f (error: %12.4f)\n", cnt, real, aproximacion, fabs(real - aproximacion));

        fact *= cnt;
        aproximacion = aproximacion + powf(x, cnt)/fact; // 'powf' funcion exponencial
        cnt ++;
    }
    printf ("Se han realizado %d iteraciones para alcanzar el valor de e^%d = %.4f\n", cnt, x, aproximacion);
    return 0;
}