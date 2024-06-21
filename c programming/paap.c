#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int* p;
    p = arr;
    int (*ptr)[5] = &arr;
    printf("p = %p , ptr = %p", p , ptr);
    printf("p val = %p , ptr val = %p", *p, *ptr);
    printf("p size = %lu , ptr size = %lu", sizeof(p), sizeof(ptr));
    return 0;
}