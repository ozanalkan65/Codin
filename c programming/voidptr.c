#include <stdio.h>

int main()
{
    int a = 5;
    char b = 'x';
    void* ptr = &a; //it can hold any type of ptr
    ptr = &b;
    printf("%s", ptr);
}