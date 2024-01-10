/*  Plantee e implemente una función recursiva que devuelva la suma de las cifras de un número entero > 0. Por ejemplo si el 
número es 721 devuelve 10. Además de la función, implemente la función apropiada para probar su funcionamiento, activandola 
desde el programa principal.  */
#include<stdio.h>

int sumarCifras(int n) { // Función que nos suma las cifras de un entero
    if (n < 0) {
        n = - n;
    }
    if (n<10){
        return n;
    } else {
        return n%10 + sumarCifras(n/10);
    }
}

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
    // Pide un entero
}

void test() {
    int n = pedirN("Dime un número para saber sus cifras");

    printf("El número de %d cifras es %d\n", n, sumarCifras(n));
}

int main() {
    test();
    return 0;
}