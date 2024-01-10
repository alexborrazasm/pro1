#include<stdio.h>
void cleanBuffer() {
    char c;

    while ((c = getchar()) != '\n' && c != EOF);
    }
    

int fun(int acc, double *n) {
    printf("Introduce un float de doble precisión: ");
    if (scanf("%lf", n) != 1) {
        cleanBuffer();
        return fun(acc + 1, n);
    } else {
        return acc+1;
    }
}

int main() {
    double n;
    int i = fun(0, &n);

    printf("Se han realizado %d intentos para llegar al float de doble precisión %.2lf\n", i, n);

    return 0;
}