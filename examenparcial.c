#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

#define TAM 101
#define MINV 50

void iniRand() {
    srand(time(NULL));
}

void iniV(int v[], int start, int n) {
    for (int i = start; i < n ; ++i) {
        v[i] = rand()%100;
    }
}

void printV(int v[], int start, int n) {
    for (int i = start; i < n ; ++i) {
        if (i == start) {
            printf("[%d,", v[i]);
        } else if (i == n-1) {
            printf("%d]", v[i]);
        } else {
            printf("%d,", v[i]);
        }
    }
    puts("");
}

int getInt(const char *string) {
    int n;
    printf("%s", string);
    scanf("%d", &n);
    return n;
}

int impares(int v[]) {
    int acc = 0;

    for (int i = MINV; i < TAM; ++i) {
        if (v[i] % 2 != 0) {
            acc++;
        }
    }
    return acc;
}

void voidMenu(int v[]){
    int min = INT_MAX, max = INT_MIN, mini = 0, maxi = 0;
    printf("El contenido del vector es:\n");
    printV(v,MINV ,TAM);
    int n = getInt("Dime un entero del intervalo [-10,-1]: ");
    while (n < -10 || n > -1) {
        n = getInt("Error, intervalo [-10,-1]\nDime un entero del intervalo: ");
    }

    for (int i = MINV; i < TAM ; ++i) {
        if (v[i] < min) {
            min = v[i];
            mini = i;
        } 
        if (v[i] > max) {
            max = v[i];
            maxi = i;
        }
    }
    printf("\nEl indice maximo es: %d\n", max);
    printf("El indice minimo es: %d\n\n", min);
    v[maxi] = n;
    v[mini] = n;
    printf("El vector con los cambios:\n");
    printV(v, MINV, TAM);
}

void funtionMenu(int v[]){
    int imp = impares(v);
    printf("\nEl numero de enteros impares en el vector es %d\n\n", imp);
}

void clearBuffer() {
    int caracter;
    while ((caracter = getchar()) != '\n' && caracter != EOF) {
    }
}

void printMenu() {
    printf("Menú:\n\n"
                  "·        P)rocedimiento.\n\n"
                  "·        F)unción.\n\n"
                  "·        S)alir.\n"
                  "\nOpción: ");
}

void menu() {
    int finish=1;
    int v[TAM];
    iniV(v, MINV, TAM);
    while (finish) {
        printMenu();
        switch (getchar()) {
            case 'P':
                voidMenu(v);
                break;
            case 'F':
                funtionMenu(v);
                break;
            case 'S':
                puts("");
                finish = 0;
                break;
            default:
                printf("Opción no válida, vuelva a intentarlo\n");
                break;
        }
        clearBuffer();
    }
    printMenu();
}

int main() {
    iniRand();
    menu();
    return 0;
}