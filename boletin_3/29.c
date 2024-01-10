/* Plantee e implemente una función recursiva en Lenguaje C para determinar si un número natural es capicúa. Además, implemente 
otra función apropiada para probar su funcionamiento, activando esta última desde el programa principal. */
#include<stdio.h>

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

int esCapicua(int n) {
    if (invInt(n, 0) ==  n) {
        return 1;
    } else {
        return 0;
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
    int n = pedirN("Dime un número para saber si es capicúa");

    if (esCapicua(n)) {
        printf("El número %d es capicúa\n", n);
    } else {
    printf("El número %d no es capicúa\n", n);
    }
}

int main() {
    test();
    return 0;
}