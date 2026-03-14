/*Desenvolva um algoritmo que preencha uma matriz numérica de dimensões 3x3.
Após preencher toda a matriz, o uusuário deve inserir uma chave de busca X.
Caso exista algum número igual a X, dentro da matriz, o algoritmo deve mostrar,
na tela, os índices da linha e da coluna da posição na qual X foi encontrado
pela primeira vez. Caso contrário, o algoritmo deve se encerrar com uma única
mensagem, dizendo "Chave não encontrada".
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[3][3];
    int i, j, x, achou = 0;

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("Insira o elemento da linha %d, coluna %d:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Insira a chave de busca:\n");
    scanf("%d", &x);

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (mat[i][j] == x) {
                //encontramos a chave de busca
                achou = 1;
                break;
            }
        }
        if (achou == 1) {
            break;
        }
    }

        if (achou == 1) {
        printf("O elemento %d foi encontrado na linha %d, coluna %d.\n", x, i, j);
        } else {
        printf("Chave nao encontrada.\n");
        }


    system("pause");
    return 0;
}