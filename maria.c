#include <stdio.h>

void peticiones(float trans[],float com [], float oc[],int dia,float *presu){

    printf("Dime tu presupuesto semanal:\n");
    scanf("%f", presu);
    printf("Dime tu gasto diario en trasporte (durante una semana, 7 dias):\n");
    for (int i = 0; i < dia; ++i) {
        scanf("%f",&trans[i]);
    }
    printf("Dime tu gasto diario en comida (durante una semana, 7 dias):\n");
    for (int i = 0; i < dia; ++i) {
        scanf("%f",&com[i]);
    }
    printf("Dime tu gasto diario en ocio (durante una semana, 7 dias):\n");
    for (int i = 0; i < dia; ++i) {
        scanf("%f",&oc[i]);
    }
}


void gastosc(float trans[],float com [], float oc[],int dia,float presu){
    float medt=0,medcom=0,medoc=0,gto,gd,por;
    for (int i = 0; i < dia; ++i) {
        medt=medt+trans[i];
    }
    printf("La media de gasto de transporte es %.2f al dia\n",medt/dia);
    printf("El gasto de transporte es %.2f a la semana\n",medt);

    for (int i = 0; i < dia; ++i) {
        medcom=medcom+com[i];
    }
    printf("La media de gasto de comida es %.2f al dia\n",medcom/dia);
    printf("El gasto de comida es %.2f a la semana\n",medcom);


    for (int i = 0; i < dia; ++i) {
        medoc=medoc+oc[i];
    }
    printf("La media de gasto de ocio es %.2f al dia\n",medoc/dia);
    printf("El gasto de ocio es %.2f a la semana\n",medoc);
    gto=medt+medcom+medoc;
    printf("El gasto total de la semana es %.2f\n",gto);

    for (int i = 0; i < dia; ++i) {
        gd = trans[i] + oc[i] + com[i];
        por = (gd * presu) / 100;
        printf("El dia %d se gastaron %.2f euros lo cual es %.2f  %% del presupuesto\n", i+1, gd, por);
    }
}

int main() {
    float trans[7], com[7], oc[7], presu;
    peticiones(trans, com, oc, 7, &presu);
    gastosc(trans, com, oc, 7, presu);
    return 0;
}