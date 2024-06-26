#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection(int arr[], int n)
{
    int i,j,min_i;
    for (i=0 ;  i<n-1;  i++)
    {
        min_i = i;
        for (j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_i])
            {
                min_i = j;
            }
        }
        if(min_i != i)
        {
            swap(&arr[min_i],&arr[i]);
        }
    }
}

void printArray(int arr[],int size)
{
    int i;
    for(i=0;  i<size;  i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {2,4,8,6,9,1,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection(arr,n);
    printf("sorted array ==> ");
    printArray(arr,n);
    return 0;
}