#include <stdio.h>

int main() {
    /*
    int A, B, soma, subtr, mult, div;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    div = A / B;

    printf("Resultados:\n");
    printf("O resultado da soma eh: %d\n", soma);
    printf("O resultado da subtracao eh: %d\n", subtr);
    printf("O resultado da multiplicacao eh: %d\n", mult);
    printf("O resultado da divisao eh: %d\n", div);
    */
    int dado = 10;
    printf("Dado antes do incremento: %d\n", dado);

    dado++;
    printf("Depois do incremento: %d\n", dado);

    dado--;
    printf("Depois do decremento: %d\n", dado);

    dado+=3;
    printf("Depois do incremento em 3 unidades: %d\n", dado);

    dado-=2;
    printf("Depois do decremento em 2 unidades: %d\n", dado);

    dado*=10;
    printf("Depois de multiplicar por 10: %d\n", dado);

    return 0;
}