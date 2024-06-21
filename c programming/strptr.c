#include <stdio.h>

typedef struct yapi
{
    int x,y,z;
}val1;
int main()
{
    val1 k={3,5,7};
    val1* p= &k;
    printf("%d",p->z);
}
