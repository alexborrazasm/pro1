/* Plantee e implemente un programa en Lenguaje C para calcular la media de 
cuatro puntuaciones de un estudiante de un curso de informática (representadas 
por 4 enteros entre 0 y 100) introducidas por teclado. Debe incluir 
obligatoriamente los siguientes elementos: */
#include<stdio.h>

#define NUMNOTAS 4

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
    // Pide un entero
}

/* Procedimiento pedirNota: solicita un entero por teclado entre 0 y 100, 
si no es correcto lo sigue pidiendo hasta que lo sea.  */
void pedirNota(int *n) {
    do {
        *n = pedirN("Introduzca la nota");
        if (*n < 0 || *n > 100) {
            printf("Rango invalido. ");
        }
    } while (*n < 0 || *n > 100);
}

/* Función calculaPuntuacion: recibe un real y devuelve la letra de la nota 
media en función a la siguiente tabla.
Media Puntuación 
[90, 100]  A 
[80, 90]   B 
[70, 80]   C
[60, 70]   D 
 [0, 60]   E
 */
char calcularPuntuacion(float n) {
    if (n <= 60 ) {
        return 'E';
    } else if (n <= 70) {
        return 'D';
    } else if (n <= 80) {
        return 'C';
    } else if (n <= 90) {
        return 'B';
    } else {
        return 'A';
    }
}

/* Procedimiento que solicita al usuario cuatro notas (usando pedirNota) y 
calcula la media aritmética de las mismas, llamando además a calculaPuntuacion 
para obtener la letra de la puntuación que luego se debe mostrar en pantalla. */
void solicitarNotas() {
    int array[NUMNOTAS];
    float acc = 0, media;

    for (int i = 0; i < NUMNOTAS; i++) {
        pedirNota(&array[i]);
        acc += array[i];
    }

    media = acc / NUMNOTAS;

    printf("La media es: %.2f\n", media);
    printf("La puntuacion es: %c\n", calcularPuntuacion(media));
}

int main() {
    solicitarNotas();
    return 0;
}