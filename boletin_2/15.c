/* Plantee e implemente un programa en Lenguaje C que presente el menú que se 
especifica a continuación y que, según sea el carácter introducido por el 
usuario, escriba en pantalla BEBÉ, ADOLESCENTE, MUJER, HOMBRE.
B.- Bebé
A.- Adolescente
M.- Mujer
H.- Hombre */
#include<stdio.h>

int main() {
    char selector;
    printf("B.- Bebé\nA.- Adolescente\nM.- Mujer\nH.- Hombre\n");
    scanf("%c", &selector);

    switch (selector)
    {
    case 'B':
        printf("Bebé\n");
        break;
    case 'A':
        printf("Adolescente\n");
        break;
    case 'M':
        printf("Mujer\n");
        break;
    case 'H':
        printf("Hombre\n");
        break;
    default:
        printf("Error, entrada no valida\n------------------------\n");
        main();
    }

    return 0;
}