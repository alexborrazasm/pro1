/*  
Plantee e implemente un programa en Lenguaje C que, a partir de un límite 
introducido por el usuario a través del teclado, obtenga el número de términos 
de la serie que es necesario tomar para satisfacer la desigualdad: 
1 + 1/2 + 1/3 + ....... + 1/n > límite */
#include <stdio.h>

void askFlt(const char *mensaje, float *n) {
    printf("%s", mensaje);
    scanf("%f", n);
}   // Función que pide por teclado un float

int main() {
    float lim, serie = 0;
    int n = 1;

    askFlt("Dime el límite: ", &lim);
    do {    // Ojo, si pongo 1 en resultado se trunca a 0 y bucle infinito
        serie += 1.0/n;  
        n++;
    } while (serie < lim);

    printf("El número de términos necesario es %d\n", n - 1);

    return 0;
}