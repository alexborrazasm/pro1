/* Plantee e implemente un programa en Lenguaje C que reciba dos enteros positivos y clasifique como perfecto, abundante 
o deficiente cada número del intervalo comprendido entre ambos, sabiendo que un número deficiente es el que la suma de sus 
divisores propios (divisores positivos menores que el propio número) es menor que él; numero perfecto es el que la suma de 
sus divisores propios es igual a él; y número abundante es el que la suma de sus divisores propios es mayor que él. 
*/
#include <stdio.h>

// Función para determinar la clasificación de un número
int clasificarNumero(int num) {
    int sumaDivisores = 1; // Inicializamos con 1, ya que 1 siempre es divisor propio.

    // Calcular la suma de los divisores propios
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sumaDivisores += i;
        }
    }

    // Clasificar el número
    if (sumaDivisores == num) {
        return 0; // Perfecto
    } else if (sumaDivisores < num) {
        return -1; // Deficiente
    } else {
        return 1; // Abundante
    }
}

int main() {
    int inicio, fin;

    // Obtener los enteros positivos del usuario
    printf("Introduce el primer entero positivo: ");
    scanf("%d", &inicio);

    printf("Introduce el segundo entero positivo: ");
    scanf("%d", &fin);

    // Validar que el segundo entero sea mayor que el primero
    if (inicio >= fin || inicio <= 0 || fin <= 0) {
        printf("Error: Ingresa dos enteros positivos y asegúrate de que el segundo sea mayor que el primero.\n");
        return 1;
    }

    // Clasificar los números en el intervalo
    printf("Clasificación de los números en el intervalo [%d, %d]:\n", inicio, fin);
    for (int i = inicio + 1; i < fin; i++) {
        int resultado = clasificarNumero(i);
        printf("%d es ", i);

        if (resultado == 0) {
            printf("perfecto\n");
        } else if (resultado == -1) {
            printf("deficiente\n");
        } else {
            printf("abundante\n");
        }
    }

    return 0;
}