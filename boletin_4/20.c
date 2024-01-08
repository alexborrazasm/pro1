/* Plantee e implemente un programa en lenguaje C que permita almacenar en memoria el nombre y las notas de una asignatura de una clase de 15 alumnos. Muestre 
por pantalla el nombre y nota de los alumnos que han obtenido la peor y la mejor calificación. Además muestre a continuación el listado con el nombre y nota de 
todos los alumnos. */
#include<stdio.h>
#include<limits.h>

#define TAM 15
#define LN 30

struct estudiante {
    char nombre[LN];
    float nota;
};

typedef struct estudiante lista[TAM];

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int pedirFloat(const char *string, int min, int max) {
    float n;
    printf("%s [%d-%d]: ",string, min, max);
    scanf("%f", &n);
    if (n >= min && n <= max) {
        return n;
    }
    puts("ERROR, rango incorrecto.\nVueleve a intentarlo.");
    return pedirFloat(string, min, max);
}

void pedirDatos(lista alumnos, int n) {
    printf("\nA continuación introduce los datos de los alumnos:\n");
    for (int i = 0; i < n; i++) {
        printf("Alumno %d, nombre: ", i+1);
        fgets(alumnos[i].nombre, sizeof(alumnos[i].nombre), stdin);
        alumnos[i].nota = pedirFloat("Nota", 0, 10);
        limpiarBuffer();
    } 
};

int indiceMax(lista alumnos, int n) {
    int max = INT_MIN, indiceMax;

    for (int i = 0; i < n; i++) {
        if (alumnos[i].nota > max) {
            max = alumnos[i].nota;
            indiceMax = i;
        }
    }
    return indiceMax;
}

int indiceMin(lista alumnos, int n) {
    int min = INT_MAX, indiceMin;

    for (int i = 0; i < n; i++) {
        if (alumnos[i].nota < min) {
            min = alumnos[i].nota;
            indiceMin = i;
        }
    }
    return indiceMin;
}

void imprimirDatos(lista alumnos, int n) {
    int iMax = indiceMax(alumnos, n);
    int iMin = indiceMin(alumnos, n);

    printf("La mejor nota ha sido %.2f sacada por %s", alumnos[iMax].nota, alumnos[iMax].nombre);
    printf("La peor nota ha sido %.2f sacada por %s", alumnos[iMin].nota, alumnos[iMin].nombre);
    printf("\nNotas de clase:\n");
    for (int i = 0; i < n; i++) {
        printf("%2d: %5.2f <---- %s", i+1, alumnos[i].nota, alumnos[i].nombre);
    }
}

int main() {
    lista alumnos;

    pedirDatos(alumnos, TAM);
    imprimirDatos(alumnos, TAM);    

    return 0;
}