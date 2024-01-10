/* Plantee e implemente un programa en Lenguaje C que mediante una serie de subprogramas determine si una fecha introducida por teclado es o no correcta, 
teniendo en cuenta para ello los años bisiestos. */

#include<stdio.h>

void pedirFecha(int *d, int *m, int *a) { 
    printf("Introduzca una fecha (dd/mm/aaaa): ");
    scanf("%d/%d/%d", d, m, a);
}

int esBisiesto(int a) {
    // Un año es bisiesto si es divisible por 4
    // pero no es divisible por 100, a menos que también sea divisible por 400.
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        return 1; // El año es bisiesto
    } else {
        return 0; // El año no es bisiesto
    }
}

int esCorrecta(int d, int m, int a) {
    if (a<1)
        return 0;
    else {
        if (m < 1 || m > 12)
            return 0;
        else {
            switch (m) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:       // meses de 31 días
                    if (d < 1 || d > 31)
                        return 0;
                    break;
                case 4: case 6: case 9: case 11:                                // meses de 30 días
                    if (d < 1 || d > 30)
                        return 0;
                    break;
                case 2:                                                         // febrero 28 días
                    if (esBisiesto(a)==1) {
                        if (d < 1 || d > 29)
                            return 0;
                    }      
                    else 
                        if (d < 1 || d > 28)
                            return 0;
                    break;
            }
        }
    }
    return 1;
}

int main() {
    int dia, mes, ano;

    pedirFecha(&dia, &mes, &ano);

    if(esCorrecta(dia, mes, ano))
        printf("La fecha introducida es correcta\n");
    else
        printf("La fecha introducida no es correcta\n");
    
    return 0;
}

