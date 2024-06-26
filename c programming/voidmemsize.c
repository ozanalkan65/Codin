#include <stdio.h>

int main()
{
    int arr[3] = { 1 , 3 , 5 };
    void* ptr = &arr;
    ptr = ptr + sizeof(int);
    printf("%d", *(int*)ptr);
}