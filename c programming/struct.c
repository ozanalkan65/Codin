#include <stdio.h>

struct yapi{
    int a;
    char b;
    float c;
    char d[5];
}var={5,'x',0.2,'abcd'};
int main()
{
    struct yapi var2= {6,'k',0.3,'sjsj'};
    printf("%d\n%c\n%f\n%c",var2.a,var2.b,var2.c,var2.d);
    printf("%f",var2.c);
}
