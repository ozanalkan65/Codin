#include <stdio.h>
#define MAXR 50
#define MAXC 50
int buildMatrix (int V[], int N,int M[MAXR][MAXC], int nr, int nc)
{
    int i,j,x,y,count;
    count = 0;
    for(i=0 ; i<N; i+=2)
    {
        int val = V[i];
        int rep = V[i+1];
        for(j=0;j<rep;j++)
        {
            x=count/nc;
            y=count%nc;
            M[x][y] = val;
            count+=1;
        }
    }
    return 1;
}
int main()
{
    int M[MAXR][MAXC] = {0};
    int V[]= {1, 2, 17, 2, 3, 1, 8, 4, 6, 1, 7, 3, 5, 2};
    int N = 14;
    int nc = 5;
    int nr = 3;
    buildMatrix(V,N,M,nr,nc);
    for(int i =0; i<nr ; i++)
    {
        for(int j=0;j<nc;j++)
        {
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
    return 0;
}