#include <stdio.h>

int main() {

    int n1, n2, n3, n4, s;
    printf("Informe quatro números em sequência:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    s = n1 + n2 + n3 + n4;

    printf("O resultado da soma entre os quatro números foi: %d.\n", s);

}
