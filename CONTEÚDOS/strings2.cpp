#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");
    /*
    char origem[N]={"Olá, mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("Depois do strcpy:\n");;
    puts(origem);
    puts(destino);
    */
    char s1[N]={"Lógica de"};
    char s2[N]={" Programação!"};

    printf("Antes do strcat:\n");
    printf("str1:%s\n",s1);
    printf("str2:%s\n",s2);

    strcat(s1,s2);

    printf("Depois do strcat:\n");
    puts(s1);

}