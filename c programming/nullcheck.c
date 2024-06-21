#include <stdio.h>

void func(int* string)
{
    if (string == NULL) {  printf("string is NULL"); return; }
    else {printf("string is not NULL");}
}

int main()
{
    func(NULL);
    return 0;
}