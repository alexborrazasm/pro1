/* Plantee e implemente un programa en Lenguaje C que empleando expresiones, 
convierta un tiempo expresado en segundos al formato horas : minutos : segundos.
*/
#include<stdio.h>

main() {
    int entrada, segundos, minutos, horas;
    printf("Tiempo en segundos: ");
    scanf("%d", &entrada);

    horas = entrada / 3600;
    segundos = entrada % 3600; 
    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d segundos son %dh : %dm : %ds\n",
             entrada, horas, minutos, segundos);
    return 0;
}