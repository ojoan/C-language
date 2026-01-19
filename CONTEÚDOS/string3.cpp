#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 20

int main () {
    setlocale(LC_ALL, "Portuguese");
    /*
    char s[N];
    int i;

    printf("Digite um texto:\n");
    gets(s);
    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressão de posição a posição:\n");
    for (i=0;i<strlen(s);i++) {
        printf("%c", s[i]);
    }
    */
    char hardText[N]={"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr);

    if (ok==0)
        printf("Textos iguais.\n");
}