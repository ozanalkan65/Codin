#include <stdio.h>

void function5(char *s , char c)
{
    for (char* w=s;  *s!='\0';  s++)
    {
        if (*s !=c)
        {
            *w++ = *s;
        }
    }
    *w = '\0';
}
int main()
{
    char mys[] = "Hello, World!";
    function5(mys,'o');
    printf("%s", mys);
    return 0;
}