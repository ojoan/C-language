#include <stdio.h>
#include <stdlib.h>

/*
 Especificadores de formato
 *d ou i - números inteiros em base decimal
 *x - números inteiros em base hexadecimal
 *f - números em ponto flutuante(com casas decimais)
 *e - números em notação científica(com casas decimais)
 *c - caracteres alfanuméricos isolados(texto)
 *s - sequência de caracteres alfanuméricos(texto)
 *[^chars] - lê todos os dados digitados, exceto os especificados em "chars"
 *.<num> - especifica quantos dígitos serão impressos após a vírgula
*/

/*
 Sequências de escape
 *\a - toca um bipe, alarme sonoro padrão do sistema
 *\b - backspace
 *\n - quebra de linha
 *\t - tabulação horizontal(TAB)
 *\r - retorna ao início da linha
 *\0 - caractere nulo
 *\v - tabulação vertical
 *\\ - caractere \
 *\' - caractere '
 *\" - caractere "
 *\? - caractere ?
 *\123 - caractere relacionado ao código 123 em octal (ASCII)
 *\X12 - caractere relacionado ao código 12 em hexadecimal (ASCII)
 *%% - caractere %
*/

int main() {
    printf("Oi, tudo bem? Tenho 6 anos e programo.\n");
    printf("Valor inteiro: %d.\n", 10);
    printf("Valor real: %f.\n", 3.14159265);
    printf("Valor real com apenas duas casas: %.2f.\n", 3.14159265);
    printf("Dado de texto: %c.\n", 'a');
    printf("Dado de texto: %s.\n", "testando");
    return 0;
}