/* Plantee e implemente una función recursiva en Lenguaje C para invertir un número entero. Además de la función, implemente la 
función apropiada para probar su funcionamiento, activando este último desde el programa principal.  */
#include<stdio.h>

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
    // Pide un entero
}

int invInt(int n, int resultado) { // resultado = 0
    // Caso base: si el número es 0, devuelve el resultado acumulado
    if (n == 0) {
        return resultado;
    } else {
        // Obtiene el último dígito
        int ultimo = n % 10;
        // Actualiza el resultado multiplicándolo por 10 y sumando el último dígito
        resultado = resultado * 10 + ultimo;
        // Elimina el último dígito del número original
        n = n / 10;
        // Llamada recursiva con el número modificado y el resultado actualizado
        return invInt(n, resultado);
    }
}

void test() {
    printf("El resultado es: %d\n", invInt(pedirN("Dime un entero para invertir"), 0));
}

int main() {
    test();
    return 0;
}