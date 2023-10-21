/* Plantee e implemente un programa en Lenguaje C que solicite tres números enteros positivos (por teclado) y que muestre por pantalla el 
cociente y el resto de dividir el mayor de ellos por el menor */

#include<stdio.h>

int pedirInt(const char* mensaje) {
    int n;
    printf("%s", mensaje);
    scanf("%d", &n);
    return n;
}

int main() {
    int n1, n2, n3, mayor, menor;

    n1 = pedirInt("Introduzca primer número: ");
    n2 = pedirInt("Introduzca segundo número: ");
    n3 = pedirInt("Introduzca tercero número: ");

    mayor = menor = n1;

    if (n2 > mayor)
        mayor = n2;
    else if (n2 < menor)
        menor = n2;

    if (n3 > mayor)
        mayor = n3;
    else if (n3 < menor)
        menor = n3;

    if (menor == 0) {
        printf("Error división por 0\n");
        return 0;
    }

    printf("\n%10d dividido |entre %d\n                    ---------\n           R: %d       C: %d\n"
    , mayor, menor, mayor % menor, mayor / menor);
    
    return 0;
}