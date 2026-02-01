/*Faça um programa que mostre os oito
primeiros termos da sequência de Fibonacci.
*/
//1 2 3 4 5 6 7 8...
//0-1-1-2-3-5-8-13...

#include<stdio.h>
#include<stdlib.h>

int main() {
    int num1, num2, i, atual;
    num1 = 1;
    num2 = 0;

    printf("Serie de Fibonacci(8 primeiros termos):\n");
    printf("%d  ", num2);
    printf("%d  ", num1);

    for (i=3; i<=8; i++){ //Começar a partir do terceiro termo e ir até o oitavo
        atual = num1 + num2;
        printf("%d  ", atual);
        num2= num1;
        num1 = atual;
    }

    printf("\n");

    system("pause");
    return 0;
}