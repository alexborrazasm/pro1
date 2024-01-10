/* Plantee e implemente un programa en lenguaje C que lea una frase de teclado (secuencia de caracteres hasta fin de línea), y determine la frecuencia de aparición 
de cada vocal respecto al total de caracteres de la frase. */
#include<stdio.h>

#define TAM 1000

void freqVocal(char text[], int n) {
    int totalChar = 0, a = 0, e = 0, i = 0, o = 0, u = 0;

    for (int j = 0; text[j] != '\n'; j++) {
        totalChar++;
        printf("%c ", text[j]);
        switch (text[j]) {
        case 'a': case 'A':
            a++;
            break;
        case 'e': case 'E':
            e++;
            break;
        case 'i': case 'I':
            i++;
            break;
        case 'o': case 'O':
            o++;
            break;
        case 'u': case 'U':
            u++;
            break;
        default:
            break;
        }
    }

    printf("\n\nTotal char: %d\n", totalChar);
    printf("\nFrecuencia:\n"
           "a -> %.2f%\n"
           "e -> %.2f%\n"
           "i -> %.2f%\n"
           "o -> %.2f%\n"
           "u -> %.2f%\n", 
           (a * 100.)/totalChar,  (e * 100.)/totalChar,  (i * 100.)/totalChar,  
           (o * 100.)/totalChar,  (u * 100.) / totalChar);
}

int main() {
    char entrada[TAM];

    printf("\nIntroduce el texto a contianución:\n");
    fgets(entrada, TAM, stdin);

    freqVocal(entrada, TAM);

    return 0;
}