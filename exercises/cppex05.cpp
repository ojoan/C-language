/*A nota final de um estudante é calculada a
partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma
avaliação semestral e a um exame final. A médida das três notas mencionadas anteriormente
obedece aos pesos a seguir:

Nota                            Peso
Trabalho de laboratório         2
Avaliação semestral             3
Exame final                     5

Faça um programa que receba três notas, calcule e mostre a média ponderada e o
conceito que segue a tabela abaixo:

Média ponderada                 Conceito
8,0 ~ 10,0                      A
7,0 ~ 8,0                       B
6,0 ~ 7,0                       C
5,0 ~ 6,0                       D
0,0 ~ 5,0                       E
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    float tr, av, ex, media;
    printf("Insira nota do trabalho de laboratorio:\n");
    scanf("%f", &tr);
    printf("Insira nota da avaliacao semestral:\n");
    scanf("%f", &av);
    printf("Insira nota do exame final:\n");
    scanf("%f", &ex);

    media = (tr*2 + av*3 + ex*5) / 10;
    printf("Media: %.2f.\n", media);

    if (media >= 8.0 && media <= 10.0) {
        printf("Nota A");
    }else if (media >= 7.0 && media < 8.0) {
        printf("Nota B");
    }else if (media >= 6.0 && media < 7.0) {
        printf("Nota C");
    }else if (media >= 5.0 && media < 6.0) {
        printf("Nota D");
    }else {
        printf("Nota E");
    }

    return 0;
}
