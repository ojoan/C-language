/*Faça um programa que carregue um vetor e nove elementos
numéricos inteiros, calcule e mostre os números primos e
suas respectivas posições.*/

//Um número é primo se ele for divisivel apenas por ele mesmo.

#include<stdio.h>
#include<stdlib.h>

int main() {
    int x, i, cont;
    printf("Insira um número inteiro:\n");
    scanf("%d", &x);

    cont=0;
    for (i = 1; i <= x; i++) {
        if (i % x == 0) {
            cont++;
        }
    }
    if (cont == 2) {
        printf("%d e numero primo.\n", x);
    } else {
        printf("%d nao e numero primo.\n", x);
    }


    system("pause");
    return 0;
}