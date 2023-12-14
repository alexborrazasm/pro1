/* Plantee e implemente, mediante funciones y procedimientos, un programa en Lenguaje C gestionado por menú en el que se presenten 
opciones para realizar las siguientes operaciones sobre números enteros: 
- Calcular el número de cifras de un entero 
- Sumar las cifras de un entero 
- Indicar la cifra i-ésima menos significativa de un entero 
- Calcular la imagen especular de un entero 
- Comprobar si un entero imo común divisor) de dos números enteros 
- Presentar la tabla de sumar, restar, multiplicar y dividir (hasta 10) de un número entero
*/
#include<stdio.h>
#include<stdlib.h>

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
}

int numCifras(int n) { // Nos devuelve el número de cifras de un entero
    if (n < 0) {
        n = - n;
    }
    if (n<10){
        return 1;
    } else {
        return 1 + numCifras(n/10);
    }
}

int sumarCifras(int n) { // Función que nos suma las cifras de un entero
    if (n < 0) {
        n = - n;
    }
    if (n<10){
        return n;
    } else {
        return n%10 + sumarCifras(n/10);
    }
}

int menosSig(int n) { // Función que nos dice la cifra menos significativa de un entero
    if (n<0) {
        n = -n;
    } 
    if (n < 10) {
        return n;
    } else {
        return menosSig(n%10);
    }
}

int esPrimo(int numero) { // Función que nos dice si un entero es primo
    if (numero <= 1) {
        return 0;  // Los números menores o iguales a 1 no son primos
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;  // Si el número es divisible por algún otro número, no es primo
        }
    }
    return 1;  // Si no se encontraron divisores, el número es primo
}

int imagenEspecular(int n) {  // Función que calcula la imagen especular de un entero
    int imagenEspecular = 0;

    while (n > 0) {
        imagenEspecular = imagenEspecular * 10 + n % 10;
        n /= 10;
    }

    return imagenEspecular;
}
int multiplicar(int n, int m) {
    return n * m;
}

int dividir(int n, int m) {
    return n / m;
}

int sumar(int n, int m) {
    return n + m;
}

int restar(int n, int m) {
    return n - m;
}

int tablaAux(int n, int acc, int (*operacion)(int, int), char signo) { // acc = 0
    acc += 1;
    if (acc == 10) {
        printf("%5d %c %2d = %3d\n\n", n, signo ,acc, operacion(n, acc));
        return 0;
    } else {
        printf("%5d %c %2d = %3d\n", n, signo, acc, operacion(n, acc));
        return tablaAux(n, acc, operacion, signo);
    }
}

void tablas(int n) {
    printf("Tabla de sumar de %d:\n", n);
    tablaAux(n, 0, sumar, '+');
    printf("Tabla de restar de %d:\n", n);
    tablaAux(n, 0, restar, '-');
    printf("Tabla de multiplicar de %d:\n", n);
    tablaAux(n, 0, multiplicar, '*');
    printf("Tabla de dividir de %d:\n", n);
    tablaAux(n, 0, dividir, '/');
}

int calcularMCD(int a, int b) {  // Función para calcular el MCD usando el algoritmo de Euclides
    // Caso base: Si b es 0, entonces el MCD es a
    if (b == 0) {
        return a;
    } else {
        // Llamada recursiva: MCD(a, b) = MCD(b, a mod b)
        return calcularMCD(b, a % b);
    }
}

void menu1() {  // Calcular el número de cifras de un entero
    int n = pedirN("Introduce un número entero");
    printf("\n\tEl número de cifras de %d es %d\n\t", n, numCifras(n));
}

void menu2() {  // Sumar las cifras de un entero
    int n = pedirN("Introduce un número entero");
    printf("\n\tLa suma de las cifras de %d es %d\n\n", n, sumarCifras(n));
}

void menu3() { // Indicar la cifra i-ésima menos significativa de un entero
    int n = pedirN("Introduce un número entero");
    printf("\n\tLa cifra menos significativa de %d es %d\n\n", n, menosSig(n));
}

void menu4() { // Calcular la imagen especular de un entero
    int n = pedirN("Introduce un número entero");
    printf("\n\tEl número imagen especular de %d es %d\n\n", n, imagenEspecular(n));
}
void menu5() { // Comprobar si un entero es primo
    int n = pedirN("Introduce un número entero");
    if (esPrimo(n)) {
        printf("\n\tEl número %d es primo\n\n", n);
    } else {
        printf("\n\tEl número %d no es primo\n\t", n);
    }
}

void menu6() { // Mostrar el MCD de dos números
    int n1 = pedirN("Introduce el primer número");
    int n2 = pedirN("Introduce el segundo número");
    printf("El MCD de %d y %d es %d\n", n1, n2, calcularMCD(n1, n2));
}

void menu7() { // Presentar la tabla de sumar, restar, multiplicar y dividir de n
    int n = pedirN("Introduce un número entero");
    tablas(n);
}

void imprimirMenu() {
    printf("---------------------------OPERACIONES SOBRE ENTEROS---------------------------\n" 
           "0 - Salir\n"
           "1 - Calcular el número de cifras de un entero\n" 
           "2 - Sumar las cifras de un entero\n"
           "3 - Indica la cifra i-ésima menos significativa de un entero\n"
           "4 - Calcular la imagen especular de un entero\n"
           "5 - Comprobar si un entero es primo\n"
           "6 - Mostrar el MCD de dos números\n"
           "7 - Presentar la tabla de sumar, restar, multiplicar y dividir de n.\n"
           "--------------------------------------------------------------------------------\n");
}

void limpiarBuffer() {
    int caracter;
    while ((caracter = getchar()) != '\n' && caracter != EOF) {
        // Consumir caracteres hasta encontrar una nueva línea o el final del archivo
    }
}

void menu() {  // Gestión de un menu de 7 opciones
    do {
        imprimirMenu();
        printf("Selecciona una operación [0-7]: ");
        switch (getchar()) {
            case '0':
                printf("Gracias por usar el programa, saliendo!\n");
                exit(0);
                break;
            case '1':
                menu1();
                break;
            case '2':
                menu2();
                break;
            case '3':
                menu3();
                break;
            case '4':
                menu4();
                break;
            case '5':
                menu5();
                break;
            case '6':
                menu6();
                break;
            case '7':
                menu7();
                break;
            default:
                printf("\nERROR, opción no valida, vuelva a intentarlo\n\n");
                break;
        }
        limpiarBuffer();
    } while (1);
}

int main() {
    menu();
    return 0;
}