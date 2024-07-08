/* Plantee e implemente un programa en Lenguaje C que muestre por pantalla los 
primeros 1000 números enteros que cumplen la siguiente condición: x^2+y^2= z^2 */
#include<stdio.h>

int main() {
    int acc = 0;

    while (acc<1001) {
        for (int x = 0; x < 1000; x++) {
            for (int y = 0; y < 1000; y++) {
                for (int z = 0; z < 1000; z++) {
                    if (x*x+y*y == z*z) {
                    acc++;
                    printf("|X=%d |y=%d |z=%d\n", x, y, z);
                    }
                }
                
            }
        }
    }     
    return 0;
}