/* Plantee e implemente un programa en Lenguaje C que solicite el nombre, el peso (en kilos) y la altura (en centímetros) de una persona por 
teclado y que calcule su índice de masa corporal, IMC=peso_en_kilos/(altura_en_metros)^2, indicando  por  pantalla  si  la  persona  está  por 
debajo de su peso  de salud: 
- Por debajo de su peso de salud (IMC<18.5)
- Normal (18.5<=IMC<25)
- Con sobrepeso de grado I (25<=IMC<27)
- Sobrepeso de grado II (27<=IMC<30)
- Obesa (IMC>=30). 
*/

#include<stdio.h>

int pedirFloat (const char *string) {
    float n;
    printf("%s", string);
    scanf("%f", &n);
    return n;
}

void pedirNombre(const char *string, char *nombre[], char *apellido[]) {
    printf("%s", string);
    scanf("%s %s", nombre, apellido); // Cuando pasamos un array no tenemos que especifica &, dado que por defecto estamos pasando el
                                      // puntero a primer valor de memoria del array
}

void salida(char name[], char surName[], float imc, const char *string) {
    printf("%s %s, según el índice de masa corporal (IMC=%.2f), %s.\n", name, surName, imc, string);
}

int main() {
    char name[20], surName[20];
    float imc, weight, h;

    pedirNombre("Introduzca usted su nombre: ", name, surName);
    h = pedirFloat("Introduzca altura en centímetros: ");
    weight = pedirFloat("Introduzca peso en kilos: ");
    
    h = h * 0.01; // Pasamos a metros
    h = h * h;    // Elevamos h^2
    imc = (weight / h);

    if (imc < 18.5)
        salida(name, surName, imc, "tiene usted un peso por debajo de su peso de salud para su estatura");
    else if (imc < 25)
        salida(name, surName, imc, "tiene usted un peso normal para su estatura");
    else if (imc < 27)
        salida(name, surName, imc, "tiene usted sobrepeso de grado I");
    else if (imc < 30)
        salida(name, surName, imc, "tiene usted sobrepeso de grado II");
    else 
        salida(name, surName, imc, "esta usted obesa");    

    return 0;
}