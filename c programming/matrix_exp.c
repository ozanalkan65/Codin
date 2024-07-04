#include <stdio.h>
#define MAXR 50
#define MAXC 50

int buildmatrix (int V[], int N, int M[MAXR][MAXC], int nr, int nc)
{
    int counter = 0;
    for (int i = 0; i<N ; i+=2)
    {
        int val = V[i];
        int rep = V[i+1];
        for (int j=0 ; j<rep ; j++)
        {
            int x = counter/nc;
            int y = counter%nc;
            M[x][y] = val;
            counter++;
        }
    }
}
int main()
{
    int V[] = {1, 2, 17, 2, 3, 1, 8, 4, 6, 1, 7, 3, 5, 2};
    int N = 14;
    int M[MAXR][MAXC] = {0};
    int nr = 3;
    int nc = 5;
    buildmatrix(V,N,M,nr,nc);
    for (int i=0; i<nr ; i++)
    {
        for(int j=0; j<nc; j++)
        {
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
}