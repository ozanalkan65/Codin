#include <stdio.h>

void geeks()
{
    int x = 55;
    int* ptr;
    ptr = &x;
    printf("adress ==> %p\n", ptr);
    printf("value from the adress ==> %d\n", *ptr);
    printf("value from the assignment ==> %d\n", x);
}
int main()
{
    geeks();
    return 0;
}