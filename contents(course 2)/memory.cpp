#include <stdio.h>
#include <stdlib.h>

//How to find the memory size of each data type using the sizeof operator

int main() {
/*
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


//Reducing memory consumption with the short operator

short value = 10222;
    printf("\nValue: %d\tSize: %d\n",value, sizeof value);

*/

    //How to increase the amount of memory for a variable of type INT using the LONG operator
    //%lld(long long decimal) or %lli(long long integer)
    int value1;
    printf("\n\nSize: %d\n", sizeof value1);

    int a, b, c;

    a= 2147483647;
    b=1;
    c= a + b;

    printf("a = %d\tb = %d\n", a,b);
    printf("c = %d",c);//negative value

    long long int value2;
    printf("\n\nSize: %d\n", sizeof value2);

    long long int d,e,f;
    d=2147483647;
    e=1;
    f=d+e;

    printf("d = %lld\te = %lld\n", d,e);
    printf("f = %lli",f);//positive value

    return 0;
}