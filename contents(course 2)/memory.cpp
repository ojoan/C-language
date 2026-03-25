#include <stdio.h>
#include <stdlib.h>

//How to find the memory size of each data type using the sizeof operator

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