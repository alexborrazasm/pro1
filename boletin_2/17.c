/* Plantee e implemente un programa en Lenguaje C que admita un carácter 
(introducido por teclado) y muestre por pantalla si es una vocal, una consonante,
 un dígito o un carácter especial. */
#include<stdio.h>

int main() {
    char c;
    printf("Introduzca un caracter: ");
    c = getchar();

    // Usamos el código ASCII para filtrar
    if (47 < c && c < 58)
        printf("%35c es un dígito\n", c);
    else if (c < 65)
        printf("%35c es un caracter especial\n", c);
    else if (c == 97 || c == 101 || c == 105 || c == 111 || c == 117 ||c == 65 
            || c == 69 || c == 73 || c == 79 || c == 85) 
        printf("%35c es una vocal\n", c);
    else
        printf("%35c es una consonante\n", c);

    return 0;
}