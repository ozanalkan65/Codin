#include <stdio.h>

int main()
{
    int* ptr = NULL;
    if (ptr == NULL)  {  printf("pointer do nothing");  }
    else {printf("deger ==> %d", *ptr);}
    return 0;
}