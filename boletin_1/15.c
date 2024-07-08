/* Un camión transporta T kilogramos de baldosas; se sabe que cada baldosa pesa 
B kilogramos. Las baldosas se van a utilizar para recubrir una superficie 
rectangular. Plantee e implemente un programa en Lenguaje C que indique el 
número de baldosas que habría en un lado del mayor cuadrado que se pueda 
recubrir con ésas baldosas, sin romperlas. */
#include<stdio.h>
#include<math.h>
/*
 El problema es que no se pueden romper baldosas. Esto exige calcular el número 
 de baldosas del lado del cuadrado máximo que se puede recubrir, y que no es 
 otro que la raíz cuadrada del cociente de la carga del camión por el peso de 
 una baldosas, esto es, la raíz cuadrada del número de baldosas. Ese número no 
 va a ser entero en general; si lo fuera, se podría construir un cuadrado de 
 dimensiones máximas para la carga. Sólo falta calcular la parte entera del 
 cociente, y ése será el tamaño del cuadrado que se puede recubrir sin romper 
 baldosas. */ 

int main() {
    float b, t;
    int lado;

    printf("Escriba el nº de kilogramos que transporta el camión: ");
    scanf("%f", &t);
    printf("Escriba el peso de una baldosa en kilogramos: ");
    scanf("%f", &b);

    lado = (int)sqrt(t/b);
    
    printf("El lado del cuadrado es %d.\n\n", lado);

    return 0;
}