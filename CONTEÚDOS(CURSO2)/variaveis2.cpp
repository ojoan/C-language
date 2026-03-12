#include <stdio.h>

int main () {
    char letra;
    int num;
    char c;
    char nome[50];

    printf("Exemplo de uso \"getchar()\"\n");
    letra = getchar();
    while (getchar() != '\n');
    printf("Voce digitou: %c\n", letra);

    printf("\nExemplo de uso \"scanf()\"\n");
    scanf("%d", &num);
    while (getchar() != '\n');
    printf("Voce digitou: %d\n", num);

    printf("\nExemplo de uso \"fgets()\"\n");
    fgets(nome, 50, stdin);
    printf("Voce digitou: %s\n", nome);

    printf("\nExemplo de uso \"getc()\"\n");
    c = getc(stdin);
    printf("Voce digitou: %c\n", c);

    return 0;
}