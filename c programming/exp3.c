#include <stdio.h>

char* function3(char* s1, char* s2)
{
    while((*s1++==*s2++)!='\0');
    return s2-1;
}
int main()
{
    char a[] = "ab" , b[] = "abcd";
    printf("%s", function3(a,b));
    return 0;
}