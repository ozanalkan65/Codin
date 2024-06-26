#include <stdio.h>

void name(){
    typedef struct yapi{
        int a;
        int b;
        char c[10];
    }var1;
    var1 ozzy = {182,65, "Ozan"};
    printf("Name : %s \n" , ozzy.c);
    printf("Weight :%d \n" , ozzy.b);
    printf("Height :%d \n" , ozzy.a);
}
int main()
{
    name();
}