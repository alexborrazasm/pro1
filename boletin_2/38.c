/* Plantee e implemente un programa en Lenguaje C para convertir un número 
decimal a binario. */
#include <stdio.h>

int main() {
    int nDecimal, temp, bit, nBinario = 0, i = 1;

    printf("Dime un número decimal para convertir a binario: ");
    scanf("%d", &nDecimal);

    temp = nDecimal;

    while (temp > 0) {
        bit = temp % 2;
        nBinario = nBinario + bit * i;
        i *= 10;
        temp = temp / 2;
    }

    printf("Decimal %d en binario es %d\n", nDecimal, nBinario);

    return 0;
}