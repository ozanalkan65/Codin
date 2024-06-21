#include <stdio.h>

void swap(int* p1, int* p2 )
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int partition(int arr[] , int low , int high)
{
    int pivot = arr[high];
    printf("%d\n", pivot);
    int i = (low-1);
    for (int j = low ; (high-1)>=j ; j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickshort(int arr[], int low, int high)
{
    if (low<high)
    {
        int pi = partition(arr,low,high);
        quickshort(arr,low,(pi-1));
        quickshort(arr,(pi+1),high);
    }
}
// 1    9   52  14  3   7 #pivot=7
// 1    3   #pivot=3    |7|     9   52  14 #pivot=52
//                              9   14  52      |52|
int main()
{
    int arr[] = {1 ,9 ,52 ,14 ,3 ,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickshort(arr,0,n-1);
    for(int i = 0; i<=(n-1); i++)
    {
        printf("%d\t",arr[i]);
    }

}