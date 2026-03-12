#include<stdio.h>
#include<stdlib.h>

/*
    VARIAVEIS
getchar() - pegar um caractere.
scanf() - pegar números, caracteres e strings.
fgets() - pegar strings de forma segura.
getc() - pegar um caractere de um arquivo ou teclado.
fgetc() - pegar um caractere de um arquivo
*/


int main () {
    char letra;
    int num;
    char c;
    char nome[50];

    printf("Exemplo de uso \"getchar()\"\n");
    letra = getchar();
    getchar();
    printf("Voce digitou: %c\n", letra);


    printf("Exemplo de uso \"scanf()\"\n");
    scanf("%d", &num);
    getchar(); //limpar o enter para não conflitar com o fgets
    printf("Voce digitou: %d\n", num);


    printf("Exemplo de uso \"fgets()\"\n");
    fgets(nome, 50, stdin); //stdin indica que o texto sera digitado no teclado
    printf("Voce digitou: %s\n", nome);


    printf("Exemplo de uso \"getc()\"\n");
    c = getc(stdin);
    printf("Voce digitou: %c\n", c);


    return 0;
}