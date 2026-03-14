#include <stdio.h>
#include <stdlib.h>
int main() {
    //Faça um programa que leia 4 números e faça a soma deles.
    int n1, n2, n3, n4, s;
    printf("Informe quatro numeros em sequencia:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    s = n1 + n2 + n3 + n4;

    printf("O resultado da soma entre os quatro numeros foi: %d.\n", s);
    return 0;

}
