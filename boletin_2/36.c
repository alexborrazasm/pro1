/* Plantee e implemente un programa en Lenguaje C de forma que solicite un carácter y que, dependiendo del carácter introducido, muestre por pantalla lo indicado y a 
continuación vuelva a mostrar el menú: 
i)   “Ahora dibujaría un rectángulo”, si se ha tecleado una R 
ii)  “Ahora dibujaría un cuadrado”, si se ha tecleado una C 
iii) “Ahora dibujaría un pentágono” si se ha tecleado una P 
iv)  “Ahora acabo el programa” si se ha tecleado una A 
*/
#include <stdio.h>

int main() {
    char c;

    while (1) {
        printf("Menu:\ni)   “Ahora dibujaría un rectángulo”, si se ha tecleado una R\n");
        printf("ii)  “Ahora dibujaría un cuadrado”, si se ha tecleado una C\n");
        printf("iii) “Ahora dibujaría un pentágono” si se ha tecleado una P\n");
        printf("iv)  “Ahora acabo el programa” si se ha tecleado una A\nTecla: ");
        c = getchar();
        switch (c) {
            case 'R':
                printf("Ahora dibujaría un rectángulo\n");
                break;
            case 'C':
                printf("Ahora dibujaría un cuadrado\n");
                break;
            case 'P':
                printf("Ahora dibujaría un pentágono\n");
                break;
            case 'A':
                printf("Ahora acabo el programa\n");
                return 0;
            default:
                printf("Error, opción no válida vudlva a intentarlo\n");
                break;
        }
        while (getchar() != '\n') {} // Leer y descartar caracteres adicionales en el búfer
    }
}
