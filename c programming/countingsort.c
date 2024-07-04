#include <stdio.h>
#include <stdlib.h>

void countingSort(int arr[], int size, int k) {
    int i;
    int max = k;
    int min = 0;

    int range = max - min + 1;

    int *count = (int *)malloc(range * sizeof(int));
    if (count == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < range; i++)
        count[i] = 0;

    for (i = 0; i < size; i++)
        count[arr[i] - min]++;

    printf("C array: ");
    for (i = 0; i < range; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");

    for (i = 1; i < range; i++)
        count[i] += count[i - 1];

    int *output = (int *)malloc(size * sizeof(int));
    if (output == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        free(count);
        exit(EXIT_FAILURE);
    }

    for (i = size - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    for (i = 0; i < size; i++)
        arr[i] = output[i];

    free(count);
    free(output);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 7, 6, 1, 6, 8, 7, 12, 6, 8, 0, 5, 4, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 12;

    printf("Original array: \n");
    printArray(arr, size);

    countingSort(arr, size, k);

    printf("Sorted array: \n");
    printArray(arr, size);

    // Finding the index of 12(2)
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 12) {
            count++;
            if (count == 2) {
                printf("Index of 12(2): %d\n", i);
                break;
            }
        }
    }

    return 0;
}
