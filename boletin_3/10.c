/* Plantee e implemente una función en Lenguaje C que tenga un argumento de tipo
 entero y que devuelva la letra P si el número es positivo o N si el número es 
 negativo.  Además  del  subprograma,  implemente  la  función  apropiada  para 
 probar su funcionamiento, activando este último desde el programa principal. */
#include <stdio.h>

char positivoNegativo(int n) {
    if (n > 0) {
        return 'P';
    } else if (n < 0) {
        return 'N';
    } else {
        puts("Ni positivo ni negativo");
        return '\0';
    }
}

void pedirN(const char *string, int *n) {
    printf("%s: ", string);
    scanf("%d", n);
}

void test() {
    int n;
    pedirN ("Dime un número", &n);
    putchar(positivoNegativo(n));
}

int main() {
    test();
    return 0;
}