/* Plantee e implemente un programa en LENGUAJE C para calcular la suma de dos  matrices  2x2.  Pida  los  datos  oportunos  y  calcule  el  resultado  deseado, mostrándolo después 
en pantalla.  */

#include<stdio.h>

int main() {
    int A11, A12, A21, A22; // inicializamos la matriz 1
    int B11, B12, B21, B22; // inicializamos la matriz 2
    int C11, C12, C21, C22; // inicializamos la matriz 3, el resultado de la suma

    printf("Programa que suma 2 matrices de 2x2, A y B\n");
    // Entrada de la matriz A
    printf("Dime la primera fila de la matriz A: ");
    scanf("%d %d", &A11, &A12);
    printf("Dime la segunda fila de la matriz A: ");
    scanf("%d %d", &A21, &A22);

    // Entrada de la matriz B
    printf("Dime la primera fila de la matriz B: ");
    scanf("%d %d", &B11, &B12);
    printf("Dime la segunda fila de la matriz B: ");
    scanf("%d %d", &B21, &B22);

    // Operaciones
    C11 = A11 + B11;
    C12 = A12 + B12;
    C21 = A21 + B21;
    C22 = A22 + B22;

    // Salida

    printf("El resultado es:\n\t\t\t|%d %d|\n\t\t\t|%d %d|\n", C11, C12, C21, C22);



    return 0;
}