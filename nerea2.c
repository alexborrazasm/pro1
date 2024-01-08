/* Utilizando el lenguaje C defina UNA FUNCIÓN booleana que, sin interacción con el usuario, reciba como parámetros dos circunferencias no concéntricas, y 
devuelva el resultado de calcular si es cierto o falso que hay intersección entre ellas. Para ello ya están definidos los siguientes tipos de datos, que debe 
utilizar en la función:

typedef struct {
    double x;
    double y; 
} tPunto;

typedef struct {
      tPunto centro;
    double radio; 
} tCircunferencia;

*/
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

// Circulo 1
#define X1 0.0
#define Y1 0.0
#define R1 3.0

// Circulo 2
#define X2 1.0
#define Y2 1.0
#define R2 2.0

typedef struct {
    double x;
    double y; 
} tPunto;

typedef struct {
    tPunto centro;
    double radio; 
} tCircunferencia;

bool interseccion(tCircunferencia c1, tCircunferencia c2) {
    double x1 = c1.centro.x, x2 = c2.centro.x;
    double y1 = c1.centro.y, y2 = c2.centro.y;
    double r1 = c1.radio, r2 = c2.radio;

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distancia <= r1 + r2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    tCircunferencia c1, c2;

    c1.centro.x = X1;
    c2.centro.x = X2;

    c1.centro.y = Y1;
    c2.centro.y = Y2;

    c1.radio = R1;
    c2.radio = R2;

    printf("\n%s se interseccionan.\n", interseccion(c1, c2)? "SI" : "NO");

    return 0;
}