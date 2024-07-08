/* Plantee e implemente en Lenguaje C una función que calcule el valor del 
siguiente polinomio: 3x5 + 2x4 – 5x3 – x2 + 7x - 6 Además del subprograma, 
implemente la función apropiada para probar su funcionamiento preguntándole al 
usuario el valor de x, y activando esta última desde el programa principal. */
#include<stdio.h>

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
}

int elevar(int n, int e) {
    if (e == 0) {
        return 1;
    } else if (n == 1) {
        return n;
    }else {
        return n * elevar(n, e-1);
    }
}

int polinomio(int x) {
    // 3x5 + 2x4 – 5x3 – x2 + 7x - 6
    return 3*elevar(x,5) + 2*elevar(x,4) - 5*elevar(x,3) - elevar(x,2) + 7*x - 6;
}

void calcularPol() {
    int x = pedirN("Programa que calcula, 3x^5+2x^4–5x^3–x^2+7x-6\nDime la x del polinomio");
    int resultado = polinomio(x);
    printf("El resultado es %d\n", resultado);
}

int main() {
    calcularPol();
    return 0;
}