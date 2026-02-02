/*O custo de um carro novo ao consumidor final é o preço de fábrica somado
ao percentual de lucro do distribuidor, acrescido dos impostos aplicados
ao preço de fábrica. Faça um programa que receba o preço de fábrica de um
veículo, o percentual de lucro do distribuidor e o percentual de impostos
*/

#include<stdio.h>
#include<stdlib.h>

float calcLucroDist(float p_fab, float por_dist) {
    return p_fab * por_dist / 100;
}

float calcImpostos(float p_fab, float por_imp) {
    return p_fab * por_imp / 100;
}

float calcPrecoFinal(float p_fab, float v_dist, float v_imp) {
    return p_fab + v_dist + v_imp;
}

int main() {
    float preco_f, porc_dist, porc_i, lucro_dist, imp, vlr_f;

    printf("Insira o preco de fabrica:\n");
    scanf("%f", &preco_f);
    printf("Insira o percentual de lucro do distribuidor:\n");
    scanf("%f", &porc_dist);
    printf("Insira o percentual de impostos:\n");
    scanf("%f", &porc_i);

    lucro_dist = calcLucroDist(preco_f, porc_dist);
    imp = calcImpostos(preco_f, porc_i);
    vlr_f = calcPrecoFinal(preco_f, lucro_dist, imp);

    printf("O lucro do distribuidor: R$ %.2f.\n", lucro_dist);
    printf("Impostos: R$ %.2f.\n", imp);
    printf("O valor final: R$ %.2f.\n", vlr_f);

    system ("pause");
    return 0;
}