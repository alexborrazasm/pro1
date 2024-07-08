/* Plantee e implemente un programa en Lenguaje C que pida el radio de una 
esfera y calcule su área y su volumen. 
Área = 4 * π * r^2
Volumen = (4/3) * π * r^3 */
#include<stdio.h>
#include<math.h>

int main() {
    float radio, area, volumen;
    double pi = M_PI;

    printf("Cual es el radio de la esfera? ");
    scanf("%f", &radio);

    area = 4* pi * (radio * radio);
    volumen = (4.0/3.0) * pi * (radio * radio *radio);

    printf("La esfera de radio %.2f, su área es %.2f y su volumen es %.2f\n",
             radio, area, volumen);
    
    return 0;
}