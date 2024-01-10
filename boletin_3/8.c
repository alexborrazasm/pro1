/* Plantee e implemente una función en Lenguaje C que reciba un valor que representa un mes y devuelva el siguiente mes, 
utilizando para ello la siguiente interface:  
MesSiguiente(mes:integer): integer; */

#include <stdio.h>

// Definición de la función MesSiguiente
int MesSiguiente(int mes) {
    // Si el mes es 12, el siguiente es 1
    if (mes == 12) {
        return 1;
    } else {
        // Para cualquier otro mes, simplemente sumamos 1
        return mes + 1;
    }
}

void pedirN(const char *string,int *n) {
    printf("%s: ", string);
    scanf("%d", n);
}

int main() {
    int mesActual;;

    pedirN("Dime el número de mes", &mesActual);

    // Llamada a la función MesSiguiente
    int siguienteMes = MesSiguiente(mesActual);

    // Mostrar el resultado
    printf("El siguiente mes a %d es %d\n", mesActual, siguienteMes);

    return 0;
}
