#include <stdio.h>

void func1() { printf("Fonksiyon 1 calisti\n"); }
void func2() { printf("Fonksiyon 2 calisti\n"); }
void wrapper(void (*ptr)()) { ptr(); }
int main() {wrapper(func1); wrapper(func2);}
