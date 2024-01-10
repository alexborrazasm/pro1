/* Plantee e implemente un programa en Lenguaje C que a partir de la siguiente información (correspondiente a un test realizado por los alumnos): cantidad total 
de preguntas planteadas y la cantidad de preguntas contestadas correctamente. Permita insertar los dos datos por teclado y muestre como resultado el nivel del 
mismo según el porcentaje de respuestas correctas obtenidas. Suponga que:

Nivel máximo:       Porcentaje>=90%.
Nivel medio:        Porcentaje>=75% y <90%.
Nivel regular:      Porcentaje>=50% y <75%.
Fuera de nivel:     Porcentaje<50%. */

#include<stdio.h>

int main() {
    int nPreguntas, aciertos;
    float nota;

    printf("Total de preguntas: ");
    scanf("%d", &nPreguntas);
    printf("Número de preguntas acertadas: ");
    scanf("%d", &aciertos);

    nota = (aciertos * 100.0)/nPreguntas;
    if (nota > 89)
        printf("Nivel máximo\n");
    else if (nota > 74)
        printf("Nivel medio\n");
    else if (nota > 49)
        printf("Nivel regular\n");
    else
        printf("Fuera de nivel\n");    
    return 0;
}