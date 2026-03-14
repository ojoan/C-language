/*Desenvolva um algoritmo que mostre a
tabuada de todos os números inteiros
compreendidos entre 1 e 10(inclusive).
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int num, i, res;
    /*
    //Mostrar a tabuada do 1 até a 10
    for (num = 1; num <= 10; num++) {
        for (i = 1; i <= 10; i++) {
            res = num * i;
            printf("%d x %d = %d\n", num, i, res);
        }
        printf("\n");
    }
   */
    //Selecionar qual vai ser o número da tabuada
    printf("Digite um numero:\n");
    scanf("%d", &num);

    for (i = 1; i <=10; i++) {
        res = num * i;
        printf("%d x %d = %d \n", num, i, res);
    }

    system("pause");
    return 0;
}
