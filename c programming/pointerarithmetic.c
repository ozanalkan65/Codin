#include <stdio.h>

int main() 
{
    int arr[3] = { 1, 10 ,100 };
    int* ptr = arr;
    int i;
    for (i=0; i<3; i++)
    {
        printf("value of *p is ==>%d\n", *ptr);
        printf("adress of p is ==>%p\n", ptr);
        ptr++;   
    }
    return 0;
}