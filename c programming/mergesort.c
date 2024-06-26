#include <stdio.h>

void merge(int arr[] , int x ,int y, int z)
{
    int i,j,k;
    int n1 = y - x + 1;
    int n2 = z - y;
    int L[n1] , R[n2];
    
    for (i=0; i<n1; i++)
    {
        L[i] = arr[x + i];
    }
    for (j=0; j<n2; j++)
    {
        R[j]= arr[y + j + 1];
    }
    i=0;
    j=0;
    k = x;
    while (i<n1 && j<n2)
    {
        if (R[j] > L[i])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[] , int l , int r)
{
    if(l<r)
    {
        int m = l + (r-l) / 2;
        mergesort(arr,l,m);
        mergesort(arr, m+1 ,r);
        merge(arr,l,m,r);
    }
}

void printarray(int A[], int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {2,7,1,6,8,3};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    printf("Array is -->");
    printarray(arr,size_arr);
    mergesort(arr , 0 , size_arr-1);
    printf("\nsorted array is\n");
    printarray(arr,size_arr);
    return 0;
}