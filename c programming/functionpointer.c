#include <stdio.h>


void fonk(int a)
{
    int val;
    val = a *5 ;
    printf("hesap makinesi bozuldu 5 le carpti ==>> %d\n", val);
    printf("hesap makinesi delirdi adresi veriyor ==>> %p\n",&a);
}
int main()
{
    void (*ptr)(int) = &fonk;
    (*ptr)(10);
    return 0;
}