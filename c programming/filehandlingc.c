#include <stdio.h>
#include <stdlib.h>

typedef int x;
typedef struct threeNum 
{
    x n1,n2,n3;
}typstr;

int main()
{
    typstr numi;
    FILE* fptr;
    if ((fptr = fopen("C:\\Users\\Casper\\Desktop\\leetcode\\d.txt","w"))==NULL) 
    {
        printf(" Error opening file !! ");
        exit(1);
    }
    for (x n=1 ; n<5 ; n++)
    {
        numi.n1 = n;
        numi.n2 = 5*n;
        numi.n3 = 5*n+1;
        fprintf( fptr , "%s %d %s %d\n","num" , n , "-->" , numi.n1 );
        fprintf( fptr , "%s %d %s %d\n","num" , n , "-->" , numi.n2 );
        fprintf( fptr , "%s %d %s %d\n","num" , n , "-->" , numi.n3 );
    }
    if (0!=1) {printf("writing failed");}
    else {printf("writing done!");}
    fclose(fptr);
    return 0;
}