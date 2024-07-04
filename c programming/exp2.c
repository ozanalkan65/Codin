#include <stdio.h>
typedef char* cp;
void function2(cp s1, cp s2, cp res)
{
    while ((*res++ = *s1++) != '\0');
    while ((*res++ = *s2++) != '\0');
}
int main()
{
    char a[]= "ab" , b[] = "cd" , c[50];
    function2(a,b,c);
    printf("%s",c);
    return 0;
}