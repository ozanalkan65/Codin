#include <stdio.h>
#define MAXN 20
#define MAXM 20

void displranking(int C[MAXN][MAXM], int n, int m)
{
    int w=3 , t=1 , l=0;
    int j = 0;
    int k = 0;
    int t = 0;
    int arr[j,k,t];
    for (int i = 0;  i<m; i++)
    {
        for(int j = 0;  j<n; j++)
        {
            int counter = 0;
            if (C[i][j]>counter)
            {
                counter += C[i][j];
                printf("%d\t", counter);
            }
        }
    for (int arr[t,j,k])
    {

    } 
    }
}

int main()
{
    int n = 4;
    int m = 3;
    int C[MAXN][MAXM] = 
    {
        {3,1,0},
        {0,1,1},
        {1,1,1},
        {1,1,3}
    };
    displranking(C,n,m);
    printf("The leading team in each of the %d matchdays is: ", m);
    printf("");

    }
}