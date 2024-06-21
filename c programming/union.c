#include <stdio.h>

typedef union yapi
{
    int x,y ;
}var;

int main(){
var k;
k.x = 10;
printf("x,y ==> %d - %d\n", k.x , k.y );
var l;
l.y = 25;
printf("x,y ==> %d - %d\n", l.x , l.y );

}