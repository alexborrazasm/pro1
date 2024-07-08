/* Plantee e implemente en Lenguaje C la función EsVocal (c: char) que recibe un
 carácter e indica  si es vocal o no (sin diferenciar entre mayúsculas y 
 minúsculas). Además de la función, implemente la función apropiada  para probar 
su funcionamiento, activando este último desde el programa principal.  */
#include<stdio.h>

int esVocal(char c) {
    char vocales[] = {'a','e','i','o','u','A','E','I','O','U'};
    for (int i = 0; i < 10; i++){
        if (c == vocales[i]) {
            return 1;
        }
    }
    return 0;
}

void test() {
    printf("Dime una vocal: ");
    if (esVocal(getchar())) {
        printf("Si es una vocal\n");
    } else {
        printf("No es una vocal\n");
    }
}

int main() {
    test();
    return 0;
}