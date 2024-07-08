/* Plantee e implemente un programa en Lenguaje C que muestre por pantalla una 
tabla indicando el radio, el perímetro y el área de tres círculos cuyo radio es
solicitado por teclado. La salida en pantalla debe tener el siguiente formato:

   RADIO    PERIMETRO   AREA
   =====    =========   =====
    2        12.56      12.56
    3        18.86      28.27
    4        25.13      50.26 */
#include<stdio.h>
#include<math.h>

int main() {
    int radio1, radio2, radio3;
    float perimetro1, area1, perimetro2, area2, perimetro3, area3;
    double pi = M_PI;
    printf("Dime el radio del primer círculo: ");
    scanf("%d", &radio1);
    printf("Dime el radio del segundo círculo: ");
    scanf("%d", &radio2);
    printf("Dime el radio del tercer círculo: ");
    scanf("%d", &radio3);

    perimetro1 = 2 * pi * radio1;
    perimetro2 = 2 * pi * radio2;
    perimetro3 = 2 * pi * radio3;

    area1 = pi * radio1 * radio1;
    area2 = pi * radio2 * radio2;
    area3 = pi * radio3 * radio3;
    
    printf("RADIO\t\tPERIMETRO\t\t AREA\n\n");
    printf("=====\t\t=========\t\t======\n");
    printf("\n%4d%20.2f%22.2f\n", radio1, perimetro1, area1);
    printf("\n%4d%20.2f%22.2f\n", radio2, perimetro2, area2);
    printf("\n%4d%20.2f%22.2f\n", radio3, perimetro3, area3);

    return 0;
}