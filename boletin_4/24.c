/*  Diseñe la estructura para almacenar en memoria la información de los trabajadores de un taller de 20 empleados. Si el empleado
es oficinista tendrá un número de teléfono; si es conductor tendrá asignado el número de matrícula de un vehículo; y si es técnico
tendrá asignado el código de barras de un ordenador. Se debe conocer el nombre, la fecha de nacimiento, tipo de puesto de trabajo
y el nivel de estudios de todos los trabajadores.  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct empleado {
    int tipoPuesto;
    char nombre[50];
    int fecha;
    char nivelEstudios[50];
    int telefono;
    char matricula[12];
    int codigoBarras;
};

void intruducirDatosEmpleado(struct empleado *e){
    printf("Introduzca el nombre del empleado: ");
    gets(e->nombre);
    printf("Introduzca la fecha de nacimiento (YYYYMMDD):");
    scanf("%d", &e->fecha);
    printf("Introduzca el nivel de estudios del empleado: ");
    gets(e->nivelEstudios);
    printf("Introduzca el tipo de puesto: (0 - Oficinista 1 - Conductor 2 - Técnico) ");
    scanf("%d", &e->tipoPuesto);
    if (e->tipoPuesto == 0) {
        auxOficinista(&e->telefono);
    } else if (e->tipoPuesto == 1) {
        printf("Introduzca la matrícula: ");
    scanf("%s", e->matricula);
    } else if (e->tipoPuesto == 2) {
        printf("Introduzca el código de barras: ");
        scanf("%d", &e->codigoBarras);
    } else {
        printf("Error tipo de puesto no valido");
        intruducirDatosEmpleado(e);
    }
};

void auxOficinista(int *n) {   
    printf("Introduzca el número de teléfono: ");
    scanf("%d", n);
}

void auxConductor(struct empleado *e) {   
    printf("Introduzca la matrícula: ");
    scanf("%s", e->matricula);
}

void auxTecnico(struct empleado *e) {   
    printf("Introduzca el código de barras: ");
    scanf("%d", &e->codigoBarras);
}


void imprimirDatosEmpleado(struct empleado e) {
    printf("El nombre del empleado es: %s\n", e.nombre);
    printf("La fecha de nacimiento del empleado es: %d\n", e.fecha);
    printf("El nivel de estudios del empleado es: %s\n", e.nivelEstudios);
    if (e.tipoPuesto == 0) {
        printf("El teléfono del empleado es: %d\n", e.telefono);
    } else if (e.tipoPuesto == 1) {
        printf("La matrícula del empleado es: %s", e.matricula);
    } else if (e.tipoPuesto == 2) {
        printf("El código de barras es: %d", e.codigoBarras);
    }
}

int main() {

    return 0;
}
