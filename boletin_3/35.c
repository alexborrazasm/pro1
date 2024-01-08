/* Plantee e implemente, mediante funciones y procedimientos, un programa en Lenguaje C dirigido por menú en el que el usuario 
pueda elegir entre cuatro opciones para realizar las siguientes operaciones: 
- Salir del programa 
- Tres opciones de entre las siguientes: 
    - Conocer el número de vocales sin acentuar existentes en un texto que el usuario 
    escribe mientras no aparezca el carácter  *. 
    - Calcular la potencia de un número b elevado a e, sin utilizar los operadores de 
    exponenciación. 
    - Mostrar por pantalla el factorial del menor de dos números enteros positivos 
    que introduzca por teclado el usuario. 
    - Visualizar una tabla con los cuadrados y los cubos de los números contenidos 
    en un intervalo de enteros indicado por el usuario. 
    - Dibujar un cuadrado, aproximadamente centrado, en pantalla con el carácter y 
    longitud del lado que indique el usuario. 
    - Mostrar el área y el perímetro del rectángulo de menor área. El usuario debe 
    indicar las longitudes de los lados de los dos rectángulos. 
    - Visualizar una tabla de los números, los cuadrados y las raíces cuadradas de 
    aquellos  números  contenidos  en  un  intervalo  de  enteros  indicado  por  el 
    usuario. 
    - Calcular el máximo, el mínimo y la media de una serie de números enteros que 
    el usuario introduce por teclado. Finaliza la serie cuando el número introducido 
    es múltiplo de 10. 
    - Mostrar por pantalla los divisores de un número entero que indique el usuario. 
    - Dibujar un triángulo equilátero, aproximadamente centrado, en pantalla con el 
    carácter y longitud del lado que indique el usuario. 
*/
#include<stdio.h>
#include<stdlib.h>

int pedirInt(const char *mensaje) {
    int n;
    printf("%s: ", mensaje);
    scanf("%d", &n);
    return n;
}

void limpiarBuffer() {
    int c = getchar();
    while (c != '\n' && c != EOF);    
}

void printMenu() {
    printf("\n\t\t\tMENU\n\n"
           "Opciones:\n\n"
           "0 -> Salir del programa.\n\n"
           "1 -> Calcular la potencia de un número b elevado a e.\n\n"
           "2 -> Visualizar una tabla con los cuadrados y los cubos de los números contenidos en un intervalo de enteros.\n\n"
           "3 -> Dibujar un triángulo equilátero.\n\n");
}

double enesimo(int b, int e) {
    if (e < 1) {
        return 1;
    } else {
        return b * enesimo(b, e-1);
    }
}

void potencia() {
    int b, e;
    double acc;

    printf("\nDime la base y exponente: formato -> b e\n -> ");
    scanf("%d %d", &b, &e);

    acc = enesimo(b, e);

    printf("\n%d elevado a %d es %.0f\n", b, e, acc);
}

void cuadradosCubos() { // Visualizar una tabla con los cuadrados y los cubos de los números contenidos en un intervalo de enteros
    int min, max;

    printf("Dime el intervalo de enteros: formato -> x x\n -> ");
    scanf("%d %d", &min, &max);

    if (max < min) {  // intercambio sí el usuario trolea
        int t = min;
        min = max;
        max = t;
    }

    printf("\n%4s %10s%10s\n", "n", "n^2", "n^3");
    for (int n = min; n <= max; n++) {
        printf(
               "%4d:%10.0f%10.0f\n", n, enesimo(n,2), enesimo(n,3));
    }
}

void trianguloEq() {
    int n;
    char c;

    printf("Dime la longitud y el caracter (formato -> char long): ");
    scanf(" %c %d", &c, &n);

    printf("\n");

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

void menu() {
    while (1) {
        printMenu();
        switch (getchar()) {
        case '0':
            printf("\nSaliendo del programa.\n\n");
            exit(0);
            break;
        case '1':
            potencia();
            break;
        case '2':
            cuadradosCubos();
            break;
        case '3':
            trianguloEq();
            break;
        default:
            printf("\nEntrada no válida, vuelve a intentarlo.\n\n");
            break;
        }
        limpiarBuffer();
    }
}

int main() {
    menu();
    return 0;
}