#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main() {

    setlocale(LC_ALL,"Portugues");

    int i;
    for(i=0; i<=256; i++) {
        printf("%c,  ",i);
    }

    int f;
    f=2;
    printf("\n\n\n%c",f);

    printf("\n\n\nCoração");
}

