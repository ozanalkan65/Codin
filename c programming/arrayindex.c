#include <stdio.h>

int main(){
    int* p;
    int (*ptr)[4];
    int arr[4];
    p = arr;
    ptr = &arr;
    printf("adress1 : %p\n", p);
    printf("adress2 : %p\n", ptr);
    p++;
    ptr++;
    printf("newadress1 : %p\n",p);
    printf("newadress2 : %p\n",*(ptr+1));
    return 0;
}