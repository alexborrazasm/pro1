/* Plantee e implemente en Lenguaje C un programa que calcule la impedancia (Z) en ohmios de un circuito LC en serie. 
Tenga en cuenta que Z = XL - XC. Donde XC es la reactancia capacitiva y XL la reactancia inductiva. Implemente las 
funciones apropiadas para los cálculos, y pruebe su funcionamiento, activándolas desde el programa principal. Pídale 
al usuario el valor del condensador en faradios, el valor de la inductancia en henrios y el valor de la frecuencia en 
hertzios para los cálculos de las reactancias. */
#include <stdio.h>
#include <math.h>

// Función para solicitar al usuario un valor de tipo double
double pedirF(const char *string) {
    double valor;
    printf("%s: ", string);
    scanf("%lf", &valor);
    return valor;
}

// Función para calcular la reactancia capacitiva (XC)
double calcularXC(double C, double f) {
    return 1 / (2 * M_PI * f * C);
}

// Función para calcular la reactancia inductiva (XL)
double calcularXL(double L, double f) {
    return 2 * M_PI * f * L;
}

// Función para calcular la impedancia (Z)
double calcularImpedancia(double XL, double XC) {
    return XL - XC;
}

int main() {
    // Variables para almacenar los valores ingresados por el usuario
    double C, L, f;

    // Pedir al usuario que ingrese los valores del condensador, la inductancia y la frecuencia
    C = pedirF("Ingrese el valor del condensador en faradios (C)");
    L = pedirF("Ingrese el valor de la inductancia en henrios (L)");
    f = pedirF("Ingrese el valor de la frecuencia en hertzios (f)");

    // Calcular las reactancias
    double XC = calcularXC(C, f);
    double XL = calcularXL(L, f);

    // Calcular la impedancia
    double Z = calcularImpedancia(XL, XC);

    // Mostrar los resultados
    printf("\nResultados:\n");
    printf("Reactancia Capacitiva (XC): %.2lf ohmios\n", XC);
    printf("Reactancia Inductiva (XL): %.2lf ohmios\n", XL);
    printf("Impedancia (Z): %.2lf ohmios\n", Z);

    return 0;
}
