#include <stdio.h>
#include <stdlib.h>

//Como descobrir o tamanho em memória de cada tipo de dado com o operador sizeof.

int main() {
    printf("int = %d\n", sizeof(int));
    printf("char = %d\n", sizeof(char));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));

    int a;
    char b;
    float c;

    printf("\nint = %d\n", sizeof a);
    printf("char = %d\n", sizeof b);
    printf("float = %d\n", sizeof c);

    return 0;
}