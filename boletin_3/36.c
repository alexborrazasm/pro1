/* Implemente un programa en Lenguaje C para trabajar con números complejos. 
Las opciones que debe tener son: 
1.- Introducir dos números complejos en forma binómica por teclado 
2.- Introducir dos números complejos en forma módulo-argumental por teclado 
3.- Sumar dos números complejos 
4.- Restar dos números complejos 
5.- Multiplicar dos números complejos 
0.- Salir 
*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

typedef struct complejo {
    double real;
    double imaginario;
} tComplejo;

tComplejo suma(tComplejo n1, tComplejo n2) { // Suma de complejos
    tComplejo resultado;

    resultado.real = n1.real + n2.real;
    resultado.imaginario = n1.imaginario + n2.imaginario;

    return resultado;
}

tComplejo resta(tComplejo n1, tComplejo n2) { // Resta de complejos
    tComplejo resultado;

    resultado.real = n1.real - n2.real;
    resultado.imaginario = n1.imaginario - n2.imaginario;

    return resultado;
}

tComplejo multiplicacion(tComplejo n1, tComplejo n2) { // Multiplicación de complejos
    tComplejo resultado;

    /* La multiplicación de a+bi y c+dic+di:

            real       =  (a⋅c) − (b⋅d)
            imaginario =  (a⋅d) + (b⋅c) */

    resultado.real = n1.real * n2.real - n1.imaginario * n2.imaginario;
    resultado.imaginario = n1.real * n2.imaginario + n1.imaginario * n2.real;

    return resultado;
}

tComplejo pedirComplejoB(char *mensaje) { 
    tComplejo n;
    
    printf("%s, formato (a bi)\n-> ", mensaje);
    scanf("%lf %lfi", &n.real, &n.imaginario);

    return n;
}

tComplejo pedirComplejoMA(char *mensaje) {
    tComplejo n;
    double modulo, argumento, a = 0.0, b = 0.0;

/*  a + bi = r * (cos(θ)+isin(θ))
    Donde:
            r(módulo) se calcula como ∣a + bi∣ = sqrt(a^2 + b^2)
            θ(argumento) se calcula como arg(a+bi)=arg(a+bi)=arctan(a/b​)​ */

    printf("%s\n", mensaje);
    printf("Dime el módulo: ");
    scanf("%lf", &modulo);
    printf("Dime el argumento, formato (a/b):\n -> ");
    scanf("%lf/%lf", &a, &b);

    argumento = atan2(b, a);

    // Convertir de forma polar a binómica
    n.real = modulo * cos(argumento);
    n.imaginario = modulo * sin(argumento);

    return n;
}

void printfImaginario(tComplejo n) {
    if (n.imaginario < 0) {
        printf("\n%.2lf %.2lf\n", n.real, n.imaginario);
    } else {
        printf("\n%.2lf +%.2lf\n", n.real, n.imaginario);
    }
    
}

void printMenu() {
    printf("\n\t\tMENU:\n\n"
           "Opciones:\n\n"
           "1.- Introducir dos números complejos en forma binómica por teclado.\n"
           "2.- Introducir dos números complejos en forma módulo-argumental por"
              " teclado.\n"
           "3.- Sumar dos números complejos.\n"
           "4.- Restar dos números complejos.\n" 
           "5.- Multiplicar dos números complejos.\n" 
           "0.- Salir.\n\n");
}

void limpiarBuffer() {
    char c = getchar();
    while (c != '\n' && c != EOF);    
}

void menu() {
    tComplejo n, m, resultado;
    int fin = 1;
    bool check = false;
    while (fin) {
        printMenu();
        switch (getchar()) {
        case '1':   // Introducir dos números complejos en forma binómica por teclado
            n = pedirComplejoB("\nDime el primer número complejo, a + bi");
            m = pedirComplejoB("Dime el segundo número complejo, a + bi");
            check = true;
            break;
        case '2':   // Introducir dos números complejos en forma módulo-argumental por teclado
            n = pedirComplejoMA("\nDime el primer número complejo  r * (cos(θ)+isin(θ))");
            m = pedirComplejoMA("Dime el segundo número complejo  r * (cos(θ)+isin(θ))");
            check = true;
            break;
        case '3':   // Sumar dos números complejos
            if (check) {
                resultado = suma(n, m);
                printfImaginario(resultado);
            } else {
                printf("\nAntes introduce los números.\n");
            }
            break;
        case '4':   // Restar dos números complejos
            if (check) {
                resultado = resta(n, m);
                printfImaginario(resultado);
            } else {
                printf("\nAntes introduce los números.\n");
            }
            break;
        case '5':   //  Multiplicar dos números complejos
            if (check) {
                resultado = multiplicacion(n, m);
                printfImaginario(resultado);
            } else {
                printf("\nAntes introduce los números.\n");
            }
            break;
        case '0':   //  Salir
            printf("\nFin de programa.\n\n");
            fin = 0;
            break;
        default:
            printf("\nERROR, entrada invalida.\n");
            break;
        }
        limpiarBuffer();
    }
}

int main() {
    menu();
    return 0;
}