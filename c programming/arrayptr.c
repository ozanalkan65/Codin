#include <stdio.h>

int main() {
    int arr[3] = {1,2,3};
    int* ptr;
    ptr = arr;
    printf("array: %d\n", *ptr);
    printf("2nd val: %d\n" , *(arr+1));
    printf("3rd val: %d\n" , *(arr+2));
    printf("1st val: %d\n" , *arr);
    printf("2nd adress: %p\n", ptr);
    return 0;
}