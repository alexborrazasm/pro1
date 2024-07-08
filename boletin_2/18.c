/* Plantee e implemente un programa en Lenguaje C que adivine un número del 1 al
   10 conociendo su paridad y el resto de dividirlo por cinco. */
#include<stdio.h>

int entrada (const char *string, int r1, int r2) {
    int n;
    printf("%s", string);
    scanf("%d", &n);
    // Comprobación de entrada
    if (n < r1 || r2 < n ) {
        printf("Error, fuera de rango\n");
        return entrada(string, r1, r2);  
        // Si la entrada no está en el rango, vuelve a pedirla
    }
    return n;
}

int main() {
    int par, resto, n;

    printf("Piense un número del 1 al 10...\n");
    par = entrada("¿El número que ha pensado es impar (1) o par (2)? ", 1, 2 );
    resto = entrada(
        "¿Cuál es el resto de dividir el número que ha pensado entre 5? ",
         0, 4);

    if (par) {
        switch (resto) {
        case 0:
            n = 10;           
            break;
        case 1:
            n = 6;           
            break;
        case 2:
            n = 2;           
            break;
        case 3:
            n = 8;           
            break;
        case 4:
            n = 4;           
            break;
        }
    }
    else {
        switch (resto) {
        case 0:
            n = 5;           
            break;
        case 1:
            n = 1;           
            break;
        case 2:
            n = 7;           
            break;
        case 3:
            n = 3;           
            break;
        case 4:
            n = 9;           
            break;
        }
    }

    printf("El número que ha pensado es el %d\n", n);

    return 0;
}