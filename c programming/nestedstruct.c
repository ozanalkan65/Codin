#include <stdio.h>

struct model{
    char a[10];
};
struct marka{
    int d;
    char b[10];
    struct model c;
};

int main()
{
    struct marka x = {1998,"nissan","juke"};
    printf("%c",x.b);
    printf("%c",x.c.a);
}
