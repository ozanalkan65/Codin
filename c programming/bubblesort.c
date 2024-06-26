/*
23  81  75  46  36  92  5
23  75  81
        46  81 
            36  81  
                81  92  
                    5   92
23  75  46  36  81  5   92
23  75  
    46  75  
        36  75  
            75  81  
                5   81  
                    81  98
23  46  36  75  5   81  98
23  46
5   23  36  46  75  81  98
*/

#include <stdio.h>
#include <stdbool.h>

void swap(int* x1 , int* x2)
{
    int temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}

void bubblesort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i<n-1 ; i++)
    {
        swapped = false;
        for(int j = 0 ; j<(n-i-1) ; j++)
        {
            if(arr[j]>arr[j+1]) {swap(&arr[j],&arr[j+1]);   swapped = true;}
        }
        if (swapped == false) {break;}
    }
}

void printarray(int arr[], int size)
{
    for(int i=0 ;i<size  ;i++) {printf("--->%d<---", arr[i]);}
}
int main()
{
    int arr[] = {1,7,5,4,9,3,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printf("Sorted array \n");
    printarray(arr,n);
    return 0;
}