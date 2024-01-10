/* Plantee e implemente un programa en Lenguaje C que acepte caracteres por teclado hasta finalizar una línea (cuando el usuario pulse enter) 
y vaya sumando un error cada vez que el carácter introducido no sea ni letra ni número. Muestre por pantalla el número de errores totales 
contabilizados del modo indicado. */

#include<stdio.h>

int main() {
    char e;
    int error = 0;

    while(1) {
        e = getchar();
        if (e == '\n')
            break;
        else if (!(e >= 48 && e <= 57 || e >= 65 && e <= 90 || e >= 97 && e <= 122 ))
            error++;
    }

    printf("Error: %d\n", error);

    return 0;
}

/* En ASCII los números son el intervalo 48 a 57, las letras mayúsculas 65 a 90 y las letras minúsculas  97 a 122 */