#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("Result: %f\n", 10/3);
    printf("Result: %f\n", 10.5/3.2);
    printf("Result: %d\n", (int)(10.5/3.2));
    printf("Result: %f\n", 10/(float)3);

    int v1,v2,v3,v4;

//remainder operator of the division %
    //v1=10; v2=3; v3=v1%v2;
    printf("\n\nRest: %d\n", v3);

//increment operator ++
    v1,v2=35; v1=v2++;
    //v1=v2++     v1=35  //v1=++v2      v1=36
    printf("\n\nV1 value: %d\tV2 value: %d",v1,v2);

//decrement operator --
    v3,v4=35;
    v3=v4--;
    printf("\n\nV3 value: %d\tV4 value: %d",v3,v4);

}