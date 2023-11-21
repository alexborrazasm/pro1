/* Plantee e implemente un subprograma en Lenguaje C que a partir de la inicial de un día de la semana (L, M, X, J, V, S, D) 
introducida mediante el teclado, devuelva  y  muestre  por  pantalla  el  nombre  del  día  en  cuestión.  Además  del 
subprograma, implemente la función apropiada para probar su funcionamiento. */

#include<stdio.h>

void inicialDia(const char a) {
    switch (a) {
    case 'L': case 'l':
        printf("Lunes\n");
        break;
    case 'M': case 'm':
        printf("Martes\n");
        break;
    case 'X': case 'x':
        printf("Miercoles\n");
        break;
    case 'J': case 'j':
        printf("Jueves\n");
        break;
    case 'V': case 'v':
        printf("Viernes\n");
        break;
    case 'S': case 's':
        printf("Sabado\n");
        break;
    case 'D': case 'd':
        printf("Domingo\n");
        break;
    default:
        printf("Entrada no válida.\n");
        break;
    }
}

char pedirChar(const char *mensaje) {
    char c;
    printf("%s", mensaje);
    scanf("%c", &c);
    return c;
}

int main() {
    inicialDia(pedirChar("Dime una inicial de un día de la semana (L, M, X, J, V, S, D): "));
    return 0;
}
