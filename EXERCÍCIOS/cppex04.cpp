/*
Faça um programa que receba dois
números e mostre o maior deles.
Caso eles sejam iguais, deve-se mostrar a
mensagem "Os números são iguais".
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    printf("Insira o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Insira o segundo numero:\n");
    scanf("%d", &n2);
    if(n1 > n2) {
        printf("O maior e: %d", n1);
    }else if(n1 < n2){
        printf("O maior e: %d", n2);
    }else {
        printf("Os numeros sao iguais.");
    }
    return 0;
}