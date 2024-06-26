#include <stdio.h>
int main()
{
    int val = 35;
    int* ptr1;
    int** ptr2;
    ptr1 = &val;
    ptr2 = &ptr1;
    printf("rotated pointer ptr2 ==> %d\n", val);
    printf("rotated pointer ptr2 ==> %d\n", *ptr1);
    printf("rotated pointer ptr2 ==> %d\n", **ptr2);
}