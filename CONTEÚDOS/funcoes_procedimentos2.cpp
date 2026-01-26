#include <stdio.h>
/*
void imprime1(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

void imprime2(int v[5]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
}

void imprime3(int *v, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

int main() {
    int vet[5] = {1, 2, 3, 4, 5};

    puts("Primeiro imprime:");
    imprime1(vet, 5);

    puts("\nSegundo imprime:");
    imprime2(vet);

    puts("\nTerceiro imprime:");
    imprime3(vet, 5);
}
*/
void imprime(int m[][4], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main () {
    int mat[3][4] = {
        {1,2,3,4},
        {50,60,70,80},
        {91,101,111,121}
    };
    imprime(mat, 3);
}