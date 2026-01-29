#include <stdio.h>
#include<stdlib.h>
/*Faça um programa que receba um salário de um
 funcionário e o percentual de aumento, calcule
 e mostre o valor do aumento e o novo salário.
 */
int main() {
    float sal1, aument, sal2, percent;


    printf("Insira o salario:\n");
    scanf("%f", &sal1);
    fflush(stdin);

    printf("Insira o percentual do aumento:\n");
    scanf("%f", &percent);
    fflush(stdin);

    aument = (sal1*percent)/100;
    sal2 = sal1 + aument;

    printf("Valor de aumento: %.2f\n", aument);
    printf("Novo salario: %.2f.\n", sal2);

    return 0;
}