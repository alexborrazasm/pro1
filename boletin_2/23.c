/*  Plantee  e  implemente  un  programa  en  Lenguaje  C  que  solicite  un  número  por teclado y que esté constantemente solicitando 
un número si no está comprendido entre 20 y 30 ambos inclusive. */

#include<stdio.h>

int main() {
    int n;
    do {
        scanf("%d", &n);
    } while (n < 20 || n > 30);
    
    return 0;
}