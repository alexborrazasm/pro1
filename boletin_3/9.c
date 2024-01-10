/* De nuevo plantee e implemente una función en Lenguaje C que reciba un valor que representa un mes y devuelva el siguiente mes, 
utilizando  para  ello  la siguiente interface:  
MesSiguiente(mes:tMes): tMes;  */
#include <stdio.h>

typedef enum {
    ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO,
    JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE
} tMes;

tMes siguienteMes(tMes mes) {
    if (mes == DICIEMBRE) {
        return ENERO;
    } else {
        return mes + 1;
    }
}

void pedirN(const char *string, int *n) {
    printf("%s: ", string);
    scanf("%d", n);
}

int main() {
    int numeroMes;

    // Solicitar al usuario que ingrese un número de mes
    pedirN("Ingrese un número de mes (1-12)", &numeroMes);

    // Validar que el número esté en el rango válido
    if (numeroMes < 1 || numeroMes > 12) {
        printf("Número de mes no válido. Debe estar entre 1 y 12.\n");
        return 1;  // Salir del programa con código de error
    }

    // Convertir el número ingresado en el tipo de dato tMes
    tMes mes = (tMes)numeroMes;

    // Calcular y mostrar el siguiente mes
    printf("El siguiente mes a %d es %d\n", mes, siguienteMes(mes));

    return 0;
}
