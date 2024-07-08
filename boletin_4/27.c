/*  Plantee e implemente un programa en lenguaje C que lea una frase (como máximo
 de 100 caracteres) y que muestre a continuación cada palabra de la misma seguida
 del número de letras que la componen. Para simplificar suponga que las palabras
 pueden separarse únicamente por espacios, comas o puntos.  */
#include<stdio.h>
#include<string.h>

#define TAM 100

void getEntrada(const char *mensaje, char *entrada, int max) {
    printf("%s", mensaje);
    fgets(entrada, max, stdin);
}

void analisisTexto(int n) {
    char texto[n], palabra[15];
    int j = 0;

    getEntrada("\nIntroduzca una frase de como máximo 100 caracteres:\n",
                 texto, n);

    puts("");

    for (int i = 0; texto[i] != '\n'; i++) {
        char c = texto[i];
        if (!(c == ' ' || c == ',' || c == '.' )) { // Palabra
            palabra[j] = c;
            j++;
        } else {
            if (j) {
                palabra[j] = '\0';
                printf("\n%15s%6ld\n", palabra, strlen(palabra));
                j = 0;
            }
        }
    }
}

int main() {
    analisisTexto(TAM);
    return 0;
}