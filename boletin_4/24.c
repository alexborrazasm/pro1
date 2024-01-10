/*  Diseñe la estructura para almacenar en memoria la información de los trabajadores de un taller de 20 empleados. Si el empleado es oficinista tendrá un número 
de teléfono; si es conductor tendrá asignado el número de matrícula de un vehículo; y si es técnico tendrá asignado el código de barras de un ordenador. Se debe 
conocer el nombre, la fecha de nacimiento, tipo de puesto de trabajo y el nivel de estudios de todos los trabajadores.  */
#include <stdio.h>

#define NEMP 3

struct empleado{
    char nombre[50];
    int fecha;
    char nivelEstudios[50];
    int tipoPuesto;
    int nTelefono;
    char matricula[12];
    int codigoBarras;
};

void introducirDatosEmpleadoOficinista(struct empleado *e) {
    printf("\nIntroduzca el número de teléfono: ");
    scanf("%d", &e->nTelefono);
}

void introducirDatosEmpleadoConductor(struct empleado *e) {
    printf("\nIntroduzca la matricula: ");
    scanf("%s", e->matricula);
}

void introducirDatosEmpleadoTecnico(struct empleado *e) {
    printf("\nIntroduzca el codigo de barras: ");
    scanf("%d", e->codigoBarras);
}

void introducirDatosGlobal(struct empleado *e) {
    printf("\nIntroduzca el nombre del empleado: ");
    gets(e->nombre);
    printf("\nIntroduzca la fecha del empleado (YYYYMMDD): ");
    scanf("%d", &e->fecha);
    printf("\nIntroduzca el nivel de estudios del empleado: ");
    scanf("%s", e->nivelEstudios);
    printf("\nIntroduzca el tipo de puesto del empleado (0 - Oficinista, 1 Conductor, 2 - Tecnico): ");
    scanf("%d", &e->tipoPuesto);
    if (e->tipoPuesto == 0) {
        introducirDatosEmpleadoOficinista(e);
    } else if (e->tipoPuesto == 1) {
        introducirDatosEmpleadoConductor(e);
    } else if (e->tipoPuesto == 2) {
        introducirDatosEmpleadoTecnico(e);
    }
}

void imprimirDatosEmpleadoOficinista(struct empleado e) {
    printf("\nEl tipo de empleo del empleado es oficinista");
    printf("\nEl número de teléfono: %d", e.nTelefono);
}

void imprimirDatosEmpleadoConductor(struct empleado e) {
    printf("\nEl tipo de empleo del empleado es conductor");
    printf("\nLa matrícula es: %s", e.matricula);
}

void imprimirDatosEmpleadoTecnico(struct empleado e) {
    printf("\nEl tipo de empleo del empleado es tecnico");
    printf("\nEl codigo de barras es: %d", e.codigoBarras);
}

void imprimirDatosGlobal(struct empleado e) {
    printf("\nEl nombre del empleado es: %s", e.nombre);
    printf("\nLa fecha del empleado (YYYYMMDD): %d", e.fecha);
    printf("\nNivel de estudios del empleado: %s", e.nivelEstudios);
    if (e.tipoPuesto == 0) {
        imprimirDatosEmpleadoOficinista(e);
    } else if (e.tipoPuesto == 1) {
        imprimirDatosEmpleadoConductor(e);
    } else if (e.tipoPuesto == 2) {
        imprimirDatosEmpleadoTecnico(e);
    }
}

int main() {
    struct empleado e[NEMP];
    for(int i = 0; i < NEMP; i++) {
        introducirDatosGlobal(&e[i]);
        imprimirDatosGlobal(e[i]);
    }
    return 0;
}
