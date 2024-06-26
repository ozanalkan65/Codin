#include <stdio.h>

void geeks() {
    int var;
    var = 10;
    int* ptr;
    ptr = &var;
    printf("Adress is: %p\n", ptr);
    printf("var value: %d\n", var);
    printf("gosterilmis var: %d\n", *ptr);
}
int main() {
    geeks();
    return 0;
}