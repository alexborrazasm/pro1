/* Plantee e implemente un subprograma en Lenguaje C para escribir N líneas en 
blanco por pantalla. Además del subprograma, implemente  un  programa principal 
para probar su funcionamiento. */
#include<stdio.h>

void imprimirBlanco(int n) {
    for (int i = 0; i < n; i++) {
        puts("");
    }
}

int main() {
    int n;

    printf("Cuantas líneas quieres en blanco: ");
    scanf("%d", &n);

    imprimirBlanco(n);

    return 0;
}