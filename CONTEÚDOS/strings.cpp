#include <stdio.h>

int main () {

    char s[10];
    /*
    printf("Digite algo (scanf convencional):\n");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%10[^\n]s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);
    */

    printf("Digite algo(leitura pelo GetS):\n");
    gets(s);
    fflush(stdin);

    puts("Resultado:");
    puts(s);
    puts("");

    printf("Digite algo(leitura pelo Fgets):\n");
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("Resultado:");
    puts(s);
}