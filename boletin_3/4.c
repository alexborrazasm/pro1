/* Plantee  e  implemente  un  subprograma  en  Lenguaje  C  para  resolver  una
 ecuación de segundo grado Ax2+Bx+C=0 a partir de sus coeficientes A, B y C. 
 Además  del  subprograma,  implemente  la  función  apropiada  para  probar  su
  funcionamiento, activando este último desde el programa principal. */
#include<stdio.h>
#include<math.h>

void ecSegundoGrado(int a, int b, int c) {
    float dentroRaiz, x1, x2;

    dentroRaiz = b * b - 4 * a * c;

    switch (dentroRaiz > 0) {
        case 1:
            // Raíces reales y distintas
            x1 = (-b + sqrt(dentroRaiz)) / (2 * a);
            x2 = (-b - sqrt(dentroRaiz)) / (2 * a);
            printf("Las raíces son reales y distintas: x1 = %.2f y x2 = %.2f\n",
                     x1, x2);
            break;

        case 0:
            switch (dentroRaiz < 0) {
                case 1:
                    // Raíces complejas conjugadas
                    x1 = -b / (2 * a);                       // Parte real
                    x2 = sqrt(-dentroRaiz) / (2 * a);        // Parte imaginaria
                    printf("Las raíces son complejas conjugadas: "
                           "x1 = %.2f + %.2fi y x2 = %.2f - %.2fi\n",
                            x1, x2, x1, x2);
                    break;

                case 0:
                    // Raíz real doble
                    x1 = -b / (2 * a);
                    printf("La raíz es real y doble: x1 = x2 = %.2f\n", x1);
                    break;
            }
            break;
    }
}

int main() {
    float a, b, c;
    printf("Ingrese los coeficientes a, b y c de la ecuación de segundo grado "
           "(ax^2 + bx + c = 0): ");
    scanf("%f %f %f", &a, &b, &c);

    // Comprobación de entrada de datos
    if (a == 0.0) {
        printf("ERROR, división por 0, vuelve a introducir a: ");
        scanf("%f", &a);
    }

    ecSegundoGrado(a,b,c);

    return 0;
}