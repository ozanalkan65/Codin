#include <stdio.h>

void add(int a, int b)
{
    printf("the sum of the nums ==> %d\n", a+b);
}
void subt(int a, int b)
{
    printf("the subt of the nums ==> %d\n", a-b);
}
void mult(int a, int b)
{
        printf("the mult of the nums ==> %d\n", a*b);
}
void div(int a, int b)
{
    if(b!=0)
    {
    printf("the div of the nums ==> %d\n", a/b);
    }
        
}
int main()
{
    int tries = 5;
    while (tries > 0)
    {
        printf("remainin try ==> %d\n" , tries);
        printf("\n\nSelect choice:\n1-sum\n2-subtract\n3-multiplication\n4-division\n");
        int ch;
        scanf("%d",&ch);
        if ((ch<1) & (ch>4) ) return 0;
        unsigned int a,b;
        printf("Enter 1st number: \n");
        scanf("%d",&a);
        printf("Enter 2nd number: \n");
        scanf("%d",&b);
        void (*ptr_arr[])(int,int) = {add,subt,mult,div};
        (*ptr_arr[ch-1])(a,b);
        tries--;
    }
        printf("==========end=========\n");
        getchar();
        getchar();
}