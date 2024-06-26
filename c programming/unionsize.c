#include <stdio.h>
//longint,long,struct,,i f c

struct yapi0{
    int p;
    long long int b;
    char a;
}yapi_0;

union yapi1{
    long long int x;
    float y;
}yapi_a;

union yapi2{
    long int z;
    char u;
}yapi_b;

union yapi3{
    int v;
    float k;
    char l;
    struct yapi0 m;
}yapi_c;

int main()
{
    int size0 = sizeof(yapi_0);
    int size1 = sizeof(yapi_a);
    int size2 = sizeof(yapi_b);
    int size3 = sizeof(yapi_c);
    printf("size 0 == %d \n", size0);
    printf("size 1 == %d \n", size1);
    printf("size 2 == %d \n", size2);
    printf("size 3 == %d \n", size3);
}

