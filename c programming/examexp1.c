#include <stdio.h>
#define MAXN 20
#define MAXM 20


int searchMax(int v[] , int n)
{
    int max=-1,i,maxi=-1;
    for (i=0; i<n ;i++)
    {
        if(max<v[i])
        {
            max = v[i];
            maxi=i;
        }
    }
    return maxi;
}

void displranking(int C[MAXN][MAXM], int n, int m)
{
    int points[MAXN]={0};
    printf("The leading team in each of the  matchdays is:%d \n", m);
    for (int i = 0;  i<m; i++)
    {
        for(int j = 0;  j<n; j++)
        {
            points[j]+=C[j][i];
        }
        printf("Match day:%d\tLeading team is:%d\n", i+1, searchMax(points,n));
    }
}

int main() {
    int C[MAXN][MAXM] = {
        {3, 1, 0},
        {0, 1, 1},
        {1, 1, 1},
        {1, 1, 3}
    };

    int n = 4;
    int m = 3;

    displranking(C, n, m);

    return 0;
}