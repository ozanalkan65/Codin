#include <stdio.h>

void function1(char* s1, char* s2, char* res)
{
    while ((*res++ = *s1++)!='\0');
    res--;
    while ((*res++ = *s2++)!='\0');
}
int main()
{
    char a[] = "ab" , b[] = "cd" , c[50];
    function1(a,b,c);
    printf("%s",c);
    return 0;
}