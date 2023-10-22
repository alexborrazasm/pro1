#include <stdio.h>
#include <string.h>

void pedirMes(const char *string, char *scan) {
    printf("%s", string);
    scanf("%s", scan);
}

int esBisiesto(int n) {
    if ((n % 4) == 0)
        return 1;
    return 0;
}

int main() {
    char mes[20];
    pedirMes("Introduzca el nombre del mes del que quiere calcular los dias: ", mes);

    int totalDias = 0;

    if (strcmp(mes, "Enero") == 0 || strcmp(mes, "Marzo") == 0 || strcmp(mes, "Mayo") == 0 || strcmp(mes, "Julio") == 0 || strcmp(mes, "Agosto") == 0 || strcmp(mes, "Octubre") == 0 || strcmp(mes, "Diciembre") == 0) {
        totalDias = 31;
    } else if (strcmp(mes, "Abril") == 0 || strcmp(mes, "Junio") == 0 || strcmp(mes, "Septiembre") == 0 || strcmp(mes, "Noviembre") == 0) {
        totalDias = 30;
    } else if (strcmp(mes, "Febrero") == 0) {
        int anio;
        printf("Introduzca el año: ");
        scanf("%d", &anio);
        if (esBisiesto(anio)) {
            totalDias = 29;
        } else {
            totalDias = 28;
        }
    } else {
        printf("Mes no valido, recuerde poner la primera letra mayuscula.\n");
        return main();
    }

    printf("El mes de %s tiene %d dias.\n", mes, totalDias);

    return 0;
}