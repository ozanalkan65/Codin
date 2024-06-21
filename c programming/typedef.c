#include <stdio.h>

typedef struct yapi {
    int a;
    char b;
}var1;
var1 x = {5,'a'};
var1 y ={6,'z'};
int main()
{
    printf("%d,%c", x.a, x.b);
}