/*1. Implemente la función is_integer en lenguaje C, la cual debe recibir una cadena de caracteres y devolver cierto si su contenido se puede transformar a un 
entero o falso en caso contrario. La firma de la función ha de ser la siguiente: bool is_integer(char *s);
Consideraciones:
 La cadena vacía no es un entero
 El valor NULL no es un entero
 Los números enteros incluyen los números negativos y positivos
 No es necesario comprobar que los números estén entre INT_MIN e INT_MAX */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define TAM 50

void pedirS(const char *mensaje, char *s) {
    printf("%s: ", mensaje);
    fgets(s, sizeof(s), stdin);

    s[strlen(s)-1] = '\0';
}

bool is_integer (char *s){
    int i = 0;
    char c = s[i];
    bool check = false;

    while (c != '\0') {
        if (i == 0) {
            if (c == '-' || c == '+' || (c >= '0' && c <= '9')) {
                i++;
                c = s[i];
            } else {
                check = false;
                return check;
            }
        } else {
            if (c >= '0' && c <= '9') {
                i++;
                c = s[i];
            } else {
                check = false;
                return check;
            }
        }
        check = true;
    }
    return check;
}

int main () {
    char s[TAM];

    pedirS("Introduzca una cadena de caracteres", s);

    printf ("La cadena '%s' %s se puede transformar a entero.\n", s, is_integer (s)? "SI" : "NO");

    return 0;
}