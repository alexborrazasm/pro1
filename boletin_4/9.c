/* Plantee e implemente un programa en lenguaje C que construya un array a partir
 de números enteros proporcionados por el usuario (máximo 20 elementos) y que a 
 continuación sustituya los números pares por su cuadrado y los números impares 
 por la parte entera de la raíz cuadrada de su valor absoluto. Muestre por 
 pantalla tanto el array original como el resultante de las operaciones indicadas.
 */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define TAM 20

int pedirArray(int array[], int n) {
    int i = 0;
    int num;

    printf("Introduzca los elementos del array (máximo 20) separados por "
            "espacios, <enter> para terminar:\n");

    do {
        if (i >= n) {
            break;
        }
        scanf("%d", &num);
        array[i] = num;
        i++;
    } while (getchar() != '\n');

    return i;
}

void imprimirArray(const char *string, int array[], int n) {
    printf("\n%s:\n", string);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("[%d, ", array[i]);
        } else if (i < n-1) {
            printf("%d, ", array[i]);
        } else { 
            printf("%d]", array[i]);
        }
    } 
    printf("\n\n");
}

void modArray(int array[], int n) {
    int m;
    for (int i = 0; i < n; i++) {
        m = array[i];
        if (m % 2) {  // Par
            array[i] = pow(m, 2);
        } else {      // Impar
            array[i] = sqrt(abs(m));
        }
    }
}

int main() {
    int entrada[TAM];
    int elementos = pedirArray(entrada, TAM);
    imprimirArray("Array inicial",entrada, elementos);
    modArray(entrada, elementos);
    imprimirArray("Array inicial",entrada, elementos);

    return 0;
}