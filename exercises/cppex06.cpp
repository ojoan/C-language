/*Desenvolva um algoritmo que some todos os números
inteiros compreendidos entre 1 e 10 (inclusive)
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    int i, soma;

    soma= 0;

    for (i=1; i<=10; i++) {
        soma = soma + i;
    }
    printf("Soma: %d.\n", soma);

    system("pause");

    return 0;
}