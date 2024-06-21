#include <stdio.h>
#define PI 3.14

typedef int i;
typedef double d;
typedef char c;
typedef struct yapi{
    i a;
    d b;
    c c;
}var;
typedef var* p;
typedef i arr[5];
i main()
{  
    arr ark={5,10,15,20,25};
    var p1;
    p ptr;
    ptr = &p1;
    p1.c = 'c';
    printf("ptr : %c\n", (*ptr).c);
    p1.a =30;
    //printf("ptr ==> %d %p\n" );
    i k = 15;
    i l = 20;
    i t;
    var j;
    i qq = j.a = 10; //i
    d qw = j.b = PI; //f
    c qe = j.c = 'x';
    printf(" k ==> %d\n", k);
    printf(" ja => %d\n" , qq);
    printf(" jb =>%f\n" , qw);
    printf(" jc => %c\n",qe);
    for (t=0;t<5;t++){
        printf("sayi => %d\n", ark[t]);
    }
}