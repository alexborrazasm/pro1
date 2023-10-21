/* Plantee e implemente un programa en Lenguaje C que solicite el salario anual bruto de una persona y muestre por pantalla la reducción del IRPF que se le 
aplicaría según los hijos menores de 18 años que tenga a su cargo, sabiendo que cada hijo (hasta 5) reduce un 10% el total del impuesto que le correspondería 
pagar. Es decir, si un trabajador gana 20000 € anuales y tiene a su cargo 5 hijos menores  de  18  años, suponiendo un IRPF del 15% (debe ser constante en el 
programa) tendría que pagar 3000€ de impuesto anual, pero se le reduce un n_hijos*10% (50%) y por tanto pagaría únicamente 1500€ al año. */

#include<stdio.h>

#define redHijos 0.1
#define IRPF 0.15

int main() {
    int nHijos;
    float salario, reduccion, irpf, totalPagar;

    printf("Introduzca su salario bruto anual: ");
    scanf("%f", &salario); 
    printf("Introduzca el número de hijos menores de 18 años: ");
    scanf("%d", &nHijos);

    reduccion = 0;
    irpf = salario * IRPF;

    if (nHijos < 6)
        reduccion = irpf * redHijos * nHijos;

    else
        reduccion = irpf * 5 * redHijos;

    totalPagar = irpf - reduccion;
    
    printf("IRPF (15 %): %.2f\n", irpf);
    printf("Reducción debida a hijos a cargo: %.2f\n", reduccion);
    printf("Total anual a pagar: %.2f\n", totalPagar );
    
    return 0;
}