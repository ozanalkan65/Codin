#include <stdio.h>

int main()
{
    char a[] = "ab", b[] = "abcd";
    while((*a++ == *b++) != '\0');
    printf("%s",b-1);
    return 0;
}