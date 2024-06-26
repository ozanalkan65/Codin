#include <stdio.h>
void function4(char *s,char c)
{
    char *w;
    for(w=s;  *s !='\0';  s++)
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
    function4(mys,'o');
    printf("%s",mys);
    return 0;
}