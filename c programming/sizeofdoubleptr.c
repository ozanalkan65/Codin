#include <stdio.h>

int main()
{
    int val = 65;
    int* ptr1;
    int** ptr2;
    ptr1 = &val;
    ptr2 = &ptr1;
    printf("size of normal ptr ==>> %d\nsize of double ptr ==> %d", sizeof(ptr1),sizeof(ptr2));
}