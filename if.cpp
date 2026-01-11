#include <stdio.h>
/*
    OPERADORES LÓGICOS
    -CONJUNÇÃO('e' lógico):&&
    É verdade quando tudo for verdade
    -DISJUNÇÃO('ou' lógico):||
    É verdade se ao menos 1 for verdade
    -INVERSÃO(negação-'não lógico'):!
    É verdade quando o operando é falso
*/
int main() {
    float m;

    printf("Insira a nota:\n");
    scanf("%f", &m);

    if (m >= 4.0 && m < 7.0) {
        printf("Tem direito a exame!\n");
        } else if (m >= 7.0) {
            printf("Aprovado(a)!\n");
        } else {
            printf("Reprovado(a)!\n");}
    }
