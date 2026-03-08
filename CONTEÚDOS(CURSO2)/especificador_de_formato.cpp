#include<stdio.h>
#include<stdlib.h>
/*

ESPECIFICADOR DE FORMATO

%d - Inteiro(int).
%f - Número decimal(float/double).
%c - Caractere.
%s - String.
%p - Endereço de memória.
%% - Imprime o símbolo %.
%x - Inteiro em hexadecimal.
%o - Inteiro em octal.

*/
int main() {
    int idade = 18;
    float altura = 1.76;
    char letra = 'a';
    char nome[] = "Carlos";
    int num = 255;
    int num1 = 10;

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Letra: %c\n", letra);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    printf("Endereco de memoria: %p\n", &num1);
    printf("Progresso: 80%% concluido\n");

    return 0;
}