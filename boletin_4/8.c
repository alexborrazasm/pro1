/* Plantee e implemente un programa en lenguaje C que, mediante búsqueda secuencial, permita encontrar el menor y el mayor índice de donde se encuentra un valor 
dado X en un array de números enteros. El programa debe permitir al usuario  introducir  apropiadamente  el  array  de  números  enteros  y  solicitarle  el 
valor que desea encontrar.  */
#include<stdio.h>

#define TAM 1000

int pedirArray(int array[]) {
    int i = 0;
    int num;

    printf("Introduzca los elementos del array (máximo 20) separados por espacios, <enter> para terminar:\n");

    do {
        scanf("%d", &num);
        array[i] = num;
        i++;
    } while (getchar() != '\n');
    
    return i;
}

int pedirN (const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;

}
void buscarInt(int array[], int n) {
    int primeraPos = -1;
    int ultimaPos = -1;
    int buscado = pedirN("Introduzca el número que desea buscar");
    for (int i = 0; i < n; i++) {
        if (array[i] == buscado) {
            if (primeraPos == -1) {
                primeraPos = i;
            }
            ultimaPos = i;
        }
    }

    if (primeraPos == -1 && ultimaPos == -1) {
        printf("El número %d no aparece en el array.\n", buscado);
    } else if (primeraPos == ultimaPos) {
        printf("El número %d aparece por primera y única vez en la posición %d.\n", buscado, primeraPos);
    } else {
        printf("El número %d aparece por primera vez en la posición %d y por última vez en la posición %d.\n", buscado, primeraPos, ultimaPos);
    }
}

int main() {
    int numeros[TAM];
    int elementos = pedirArray(numeros);
    buscarInt(numeros, elementos);
    
    return 0;
}