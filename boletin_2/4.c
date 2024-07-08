/* Plantee e implemente un programa en Lenguaje C que muestre por pantalla el 
mayor de tres números introducidos por teclado. */
#include<stdio.h>

main() {
    int n, m, r, salida;
    printf("Introduzca el primer número: ");
    scanf("%d", &n);
    printf("Introduzca el segundo número: ");
    scanf("%d", &m); 
    printf("Introduzca el tercer número: ");
    scanf("%d", &r);

    if (n > m){
        if (n > r)
            salida = n;
        else
            salida = r;
    }
    else {
        if (m > r)
            salida = m;
        else
            salida = r;
    }
    printf("%d es el número mayor de los tres introducidos\n", salida);
    return 0;
}
