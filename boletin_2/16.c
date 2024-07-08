/* Plantee e implemente un programa en Lenguaje C que admita el nombre y la edad
 de una persona y muestre por pantalla si la persona es JOVEN, ADULTA, o ANCIANA 
según los siguientes criterios:

1. Si tiene menos de 32 años es JOVEN.
2. Si tiene 32 o más años y menos de 75 es ADULTA.
3. Si tiene 75 o más años es ANCIANA. 
*/
#include<stdio.h>

int pedirInt (const char *string) {
    int n;
    printf("%s", string);
    scanf("%d", &n);
    return n;
}

void pedirNombre(const char *string, char nombre[], char apellido[]) {
    printf("%s", string);
    scanf("%s %s", nombre, apellido); 
    /* Cuando pasamos un array no tenemos que especifica &, dado que por defecto
     estamos pasando el puntero a primer valor de memoria del array */
}

int main() {
    int edad;
    char nombre[20], apellido[20];

    pedirNombre("Nombre: ", nombre, apellido);
    edad = pedirInt("Edad: ");

    if (edad < 32)
        printf("%s %s es JOVEN (<32)", nombre, apellido);
    else if (edad < 75)
        printf("%s %s es ADULTA (<75)", nombre, apellido);
    else printf("%s %s es ANCIANA (<75)", nombre, apellido);
    return 0;
}