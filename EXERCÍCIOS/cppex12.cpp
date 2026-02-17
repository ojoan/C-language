/*Faça um programa que carregue um vetor e nove elementos
numéricos inteiros, calcule e mostre os números primos e
suas respectivas posições.*/

//Um número é primo se ele for divisivel apenas por ele mesmo.

#include<stdio.h>
#include<stdlib.h>

int main() {
    int vet[9], i, j, cont;

    for (i=0; i<9; i++){
        printf("Insira um numero inteiro:\n");
        scanf("%d", &vet[i]);
    }

    for (i=1; i<9; i++) {
        cont=0;
        for (j = 1; j <= vet[i]; j++) {
            if (vet[i] % j == 0) {
                cont++;
            }
        }
        if (cont == 2 || cont == 1) {
            printf("%d e numero primo, posicao: %d.\n", vet[i], i);
        } else {
            printf("%d nao e numero primo, posicao: %d.\n", vet[i], i);
        }
    }

    system("pause");
    return 0;
}