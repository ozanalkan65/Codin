#include <stdio.h>

int isincreasing(int vet[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(vet[i]<=vet[i-1])
        {
            printf("azaliyor :%d", vet[i]);
            return 0;
        }
        else
        {
            printf("artiyor: %d",vet[i]);
            return 1;
        }
    }
    return 1;
}

int main()
{
    int arr[] = {0,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    isincreasing(arr,n);
}