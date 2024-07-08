/* Implemente un programa en lenguaje C que tras leer un texto, indique el 
nÃºmero de palabras que tienen un minino de tres vocales diferentes. */
#include<stdio.h>
#include<stdbool.h>

#define TAM 500

void pedirTexto(char *string, int n) {
    printf("\nIntroduce el texto: ");
    fgets(string, n, stdin);
}

void analisisTexto(char *string) {
    int palabras3v = 0, vocal = 0, nVocales = 10;
    char vocales[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char vocalesPasadas[TAM];
    bool vocalCheck = false, repCheck = true, palabraCheck = true;

    for (int i = 0; string[i] != '\0'; i++) {   // Bucle que recorre el texto de entrada
    
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')) {  // Es una letra

            for (int j = 0; j < nVocales; j++) {  // Compruebo si es una vocal
                if (vocales[j] == string[i]) {
                    vocalCheck = true;
                }
            }
            
            if (vocalCheck) {   // Si es una vocal
            // Comprueba que no esta en la lista de vocales de la palaba actual
                for (int n = 0; n < vocal; n++) {           
                    if (string[i] == vocalesPasadas[n]) {
                        repCheck = false;
                    }
                }
                // Si no se repite, sumamos 1 a vocal y la añadirmos a la lista
                if (repCheck) {                             
                    vocalesPasadas[vocal] = string[i];                          
                    vocal++;
                }
            }

            if (vocal == 3 && palabraCheck) {  // Palabra 3 vocales
                palabras3v++;
                palabraCheck = false;
            }

            vocalCheck = false;

        } else {  // No letra
            palabraCheck = true;
            vocal = 0;
            repCheck = true;
        }
    }
    printf("\nLas palabras con más de 3 vocales distintas: %d\n\n", palabras3v);
}

int main() {
    char texto[TAM];

    pedirTexto(texto, TAM);
    analisisTexto(texto);

    return 0;
}