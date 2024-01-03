/* Plantee e implemente un programa en lenguaje C que mediante un menú apropiado permita al usuario introducir dos matrices NxN de números enteros (0<N<10) y 
seleccionar la operación (suma, resta o producto) que desea realizar con ellas. Muestre los resultados de la operación seleccionada por pantalla en formato 
matricial. */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define TAM 10

typedef int matrix[10][10];

int getInt(const char *string, int min, int max) {
    int n;
    printf("%s\n", string);
    printf("Rango (%d-%d]: ", min, max);
    scanf("%d", &n);
    if (n > min && n <= max) {
        return n;
    }
    puts("ERROR, rango incorrecto.\nVueleve a intentarlo.");
    return getInt(string, min, max);
}

void getMatrix(matrix m, int n, bool *check) {
    int num;

    printf("\nIntroduce la matriz fila por fila, %d elementos, pulsando <enter>:\n", n);

    for (int i = 0; i < n; i++) {
            printf("Fila %d: ", i+1);
            for (int j = 0; j < n; j++){
                if (scanf("%d", &num) != 1) {
                    printf("ERROR, entrada no válida");
                    exit(0);
                }
                m[i][j] = num;
            }
        }
    *check = true;
}

void putsMenu() {
    printf("\n              OPCIONES MENU:\n"
           "\n 1 -> Introducir datos primera matriz.\n"
           "\n 2 -> Introducir datos segunda matriz.\n"
           "\n 3 -> Sumar las matrices.\n"
           "\n 4 -> Restar las matrices.\n"
           "\n 5 -> Multiplicaar las matrices.\n"
           "\n 0 -> Salir\n\n");
}

void addMatrix(matrix e0, matrix e1, matrix sol, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sol[i][j] = e0[i][j] + e1[i][j];
        }
    }
}

void subtractMatrix(matrix e0, matrix e1, matrix sol, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sol[i][j] = e0[i][j] - e1[i][j];
        }
    }
}

void multiplyMatrix(matrix m0, matrix m1, matrix result, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += m0[i][k] * m1[k][j];
            }
        }
    }
}

void printMatrix(const char *string, matrix matrix, int n) {

    printf("\n%s:\n", string);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                printf("[");
            }
            printf("%3d", matrix[i][j]);
            if (j == n-1) {
                puts("]");
            }
        }
    }
}

void cleanBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

bool checkIn(bool check0, bool check1) {
    if (!check0 && !check1) {
        puts("\n\nERROR, antes intoduce los valores de las 2 matrices.\n");
        return false;
    } else if (!check0) {
        puts("\n\nERROR, antes intoduce el valor de la primera matriz.\n");
        return false;
    } else if (!check1) {
        puts("\n\nERROR, antes intoduce el valor de la segunda matriz.\n");
        return false;
    } else {
        return true;
    }
}

void menu() {
    matrix m0, m1, mSol;
    bool check0 = false, check1 = false;
    int n = getInt("Dime el tamaño de la matriz NxN", 0, TAM);
    cleanBuffer();

    while (1) {
        putsMenu();
        switch (getchar()) {
        case '1':
            getMatrix(m0, n, &check0);
            printMatrix("Matriz introducida", m0, n);
            break;
        case '2':
            getMatrix(m1, n, &check1);
            printMatrix("Matriz introducida", m1, n);
            break;
        case '3':
            if (checkIn(check0, check1)) {
                addMatrix(m0, m1, mSol, n);
                printMatrix("La suma de las matrices es", mSol, n);
            }
            break;
        case '4':
            if (checkIn(check0, check1)) {
                subtractMatrix(m0, m1, mSol, n);
                printMatrix("La resta de las matrices es", mSol, n);
            }
            break;
        case '5':
            if (checkIn(check0, check1)) {
                multiplyMatrix(m0, m1, mSol, n);
                printMatrix("La multiplicación de las matrices es", mSol, n);
            }
            break;
        case '0':
            printf("\n\nFIN DE PROGRAMA\n\n");
            exit(0);
            break;
        default:
            puts("\nERROR, entrada no válida.\n\nVuelve a intertarlo:\n\n");
            break;
        }
        cleanBuffer();     
    }
}

int main() {
    menu();
    return 0;
}