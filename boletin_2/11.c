/* Plantee e implemente un programa en Lenguaje C cuyo objetivo sea calcular las raíces de una ecuación de 2º grado, ax2+bx+c. El programa 
debe solicitar por teclado los coeficientes a, b, c. y mostrar por pantalla las soluciones x1 y x2. */

#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, dentroRaiz, x1, x2;

    printf("Ingrese los coeficientes a, b y c de la ecuación de segundo grado (ax^2 + bx + c = 0): ");
    scanf("%f %f %f", &a, &b, &c);

    // Comprobación de entrada de datos
    if (a == 0) {
        printf("ERROR, división por 0, vuelve a introducir a: ");
        scanf("%d", &a);
    }

    dentroRaiz = b * b - 4 * a * c;

    switch (dentroRaiz > 0) {
        case 1:
            // Raíces reales y distintas
            x1 = (-b + sqrt(dentroRaiz)) / (2 * a);
            x2 = (-b - sqrt(dentroRaiz)) / (2 * a);
            break;

        case 0:
            switch (dentroRaiz < 0) {
                case 1:
                    // Raíces complejas conjugadas
                    x1 = -b / (2 * a);                       // Parte real
                    x2 = sqrt(-dentroRaiz) / (2 * a);        // Parte imaginaria
                    break;

                case 0:
                    // Raíz real doble
                    x1 = -b / (2 * a);
                    break;
            }
            break;
    }
    printf("x1 = %.2f y x2 = %.2f\n", x1, x2);

    return 0;
}