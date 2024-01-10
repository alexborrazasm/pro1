/*7. Plantee e implemente un programa en lenguaje C que mediante un menú
apropiado permita al usuario introducir dos matrices NxN de números enteros
(0<N<10) y seleccionar la operación (suma, resta o producto) que desea realizar
con ellas. Muestre los resultados de la operación seleccionada por pantalla en
formato matricial.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void mat(int N,int matriz1[N][N],int matriz2[N][N]){
    puts("Matriz 1:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("Valor posicion %d x %d\n",i+1,j+1);
            scanf("%d",&matriz1[i][j]);
        }
    }
    puts("Matriz 2:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("Valor posicion %d x %d\n",i+1,j+1);
            scanf("%d",&matriz2[i][j]);
        }
    }
}
void suma(int N,int matriz1[N][N],int matriz2[N][N]){
    int res[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            res[i][j]= matriz1[i][j]+matriz2[i][j];
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }


}
void resta(int N,int matriz1[N][N],int matriz2[N][N]){
    int res[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            res[i][j]= matriz1[i][j]-matriz2[i][j];
        }
    }
    puts("Resultado resta:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
}
void producto(int N,int matriz1[N][N],int matriz2[N][N]){
    int res[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            res[i][j]= matriz1[i][j]*matriz2[j][i];
        }
    }
    puts("Resultado producto:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
}



int main() {
    int N=0, matriz1[N][N],matriz2[N][N],op;
    bool cont=true;
    printf("Dime el tamaño que quieres que tenga la matriz:\n");
    scanf("%d",&N);
    if(0>N || N>10){
        printf("Tamaño no permitido");
        exit(0);
    }else{
        mat(N,matriz1,matriz2);
        do{
            puts("OPCIONES\n");
            puts("1 - SUMA\n");
            puts("2 - RESTA\n");
            puts("3 - PRODUCTO\n");
            puts("0 - SALIR\n");
            printf("Elije una opcion:\n");
            scanf("%d",&op);

            switch (op) {
                case 0:
                    cont=false;
                    puts("Gracias por usar hoy neustro programa!\n");
                    break;
                case 1:
                    suma(N,matriz1,matriz2);
                    break;
                case 2:
                    resta(N,matriz1,matriz2);
                    break;
                case 3:
                    producto(N,matriz1,matriz2);
                    break;
            }
        }while(cont);
    }
    return 0;
}
