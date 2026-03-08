#include <stdlib.h>
#include <stdio.h>
/*

\n - Pular linha.
\t - Cria um espaço grande como a tecla Tab.
\" - Permite escrever " sem encerrar a string.
\' - Aspas simples dentro de caracteres ou strings.
\\ - Imprime a barra invertida \.

*/
int main() {

    printf("Linha 1\nLinha 2\n");

    printf("Nome:\tPedro\n");

    printf("Ele disse: \"Como vai?\"\n");

    printf("Ele disse: \'Como vai?\'\n");

    printf("Barra: \\");

    return 0;
}