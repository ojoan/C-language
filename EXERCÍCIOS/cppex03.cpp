#include <stdio.h>
#include<stdlib.h>

/*Desenvolva um algoritmo que receba o tempo cronometrado em
segundos, e digo quantas horas, minutos e segundos se passaram
a partir do tempo cronometrado.*/

int main() {
    float seg, min, horas;
    printf("Insira o tempo em segundos:\n");
    scanf("%f", &seg);;

    min = seg/60;
    horas = (seg/60)/60;

    printf("Horas: %.2f.\n", horas);
    printf("minutos: %.2f.\n", min);
    printf("segundos: %.2f.\n", seg);


    return 0;
}