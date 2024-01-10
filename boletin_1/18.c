/* Plantee e implemente un programa en Lenguaje C que solicite a un usuario su nombre, apellidos, sueldo mensual (en euros) y el dinero que gasta diariamente 
en  ocio,  comida  y  transporte.  A  continuación,  utilizando  descriptores  de formato, debe mostrar una tabla como la que se indica donde se recoja el % 
de su  sueldo  que  gasta  semanalmente  en  ocio,  comida  y  transporte.  Incluya también el total del gasto semanal realizado
************************************************************************ 
*******                   Sonia Rodríguez: 1000€                 *******  
            %Ocio         %Comida           %Transporte           %Otros 
             7.5%              5%               10.34 %            2.16% 
*******                                                          ******* 
                                                          Gasto  semanal 
                                                                    250€ 
************************************************************************ 
*/
#include<stdio.h>

int main() {
    char nombre[10], apellido1[15], apellido2[15];
    float salario, ocio, comida, transporte, otros, totalGasto, salidaOcio, salidaComida, salidaTransporte, salidaOtros;

    printf("Introduzca su nombre y apellidos: ");
    scanf("%s %s %s", &nombre, &apellido1, apellido2);
    printf("Introduzca su salario mensual: ");
    scanf("%f", &salario);
    printf("Ahora introduzca los siguientes gastos semanales:\nOcio: ");
    scanf("%f", &ocio);
    printf("Comida: ");
    scanf("%f", &comida);
    printf("Transporte: ");
    scanf("%f", &transporte);
    printf("Otros: ");
    scanf("%f", &otros);

    // cálculos
    salidaOcio = (ocio/salario) * 100;
    salidaComida = (comida/salario) * 100;
    salidaTransporte = (transporte/salario) * 100;
    salidaOtros = (otros/salario) * 100;
    totalGasto = ocio + comida + transporte + otros;

    // salida
    printf("************************************************************************\n");
    printf("*******\t%s %s %s: %.0f\t*******\n", nombre, apellido1, apellido2, salario);
    printf("            %%Ocio         %%Comida           %%Transporte           %%Otros\n");
    printf("%17.1f%16.1f%22.1f%17.1f\n", salidaOcio, salidaComida, salidaTransporte, salidaOtros);
    printf("*******                                                          *******\n");
    printf("                                                          Gasto  semanal\n");
    printf("                                                                    %.0f€\n", totalGasto);
    printf("************************************************************************\n");

    return 0;
}