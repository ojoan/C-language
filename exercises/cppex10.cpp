/*Faça um programa que receba o número de horas trabalhadas por um gestor
e o valor do salário mínimo virgente. Crie uma função que calcule o salário
a receber do gestor, seguindo as regras abaixo:

I - A hora trabalhada vale a metade do salário mínimo;
II - O salário bruto equivale ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada;
III - O imposto equivale a 3% do salário bruto;
IV - O salário a receber equivale ao salário bruto menos o imposto.
*/

#include<stdio.h>
#include <stdlib.h>

float calcSalRec(float n_hr, float s_min) {
    float hr_t, s_brt, imp, s_rec;
    hr_t = s_min / 2.0;
    s_brt = n_hr * hr_t;
    imp = s_brt * 3 /100;
    s_rec = s_brt - imp;
    return s_rec;
}

int main() {
    float horas_trab, sal_min, sal_rec;

    printf("Insira o numero de horas trabalhadas:\n");
    scanf("%f", &horas_trab);
    printf("Insira o salario minimo:\n");
    scanf("%f", &sal_min);

    sal_rec = calcSalRec(horas_trab, sal_min);

    printf("Salario a receber: R$%.2f.\n", sal_rec);

    system("pause");
    return 0;
}