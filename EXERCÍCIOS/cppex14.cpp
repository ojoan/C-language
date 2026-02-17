/*Faça um programa que seja capaz de armazenas os dados de três pessoas:
nome, idade, peso e altura. Ao final, o algoritmo deve mostrar, na tela, o nome
e a idade da primeira pessoa e o peso e altura da última pessoa.
*/

#include<stdio.h>
#include<stdlib.h>

struct t_pessoa {
    char nome[100];
    int idade;
    float peso;
    float altura;
};

int main() {
     struct t_pessoa lista[3];
    int i;
    for (i=0; i<3; i++) {
        printf("Insira o nome da pessoa da posicao %d:\n", i);
        scanf("%99[^\n]s", &lista[i].nome);
        fflush(stdin);

        printf("Insira a idade da pessoa da posicao %d:\n", i);
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        printf("Insira o peso da pessoa da posicao %d:\n", i);
        scanf("%f", &lista[i].peso);
        fflush(stdin);

        printf("Insira a altura da pessoa da posicao %d:\n", i);
        scanf("%f", &lista[i].altura);
        fflush(stdin);

    }

    printf("Nome da primeira pessoa: %s\n", lista[0].nome);
    printf("Idade da primeira pessoa: %d\n", lista[0].idade);
    printf("Peso da terceira pessoa: %.2f\n", lista[2].peso);
    printf("Altura da segunda pessoa: %.2f\n", lista[1].altura);

    system ("pause");
    return 0;
}

