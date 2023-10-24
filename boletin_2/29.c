/* Plantee e implemente un programa en Lenguaje C que acepte valores reales como entrada (por teclado) y que muestre por pantalla la media 
aritmética de los valores introducidos. El programa terminará cuando el usuario pulse enter, tal y como se muestra en el ejemplo siguiente:
*/

#include<stdio.h>

int main() {
    float n, suma;
    int c = 0;
    suma = 0;

    printf("A  continuación  introduzca  los  números  de  los  que  desee  calcular  la  media separados por espacios: ");

    while (1) {
        scanf("%f", &n);
        suma += n;
        c++;
        if (getchar() == '\n')
            break;
    }

    printf ("La media aritmetica de los %d numeros introducidos es: %.2f\n", c, suma / c);
    
    return 0;
}