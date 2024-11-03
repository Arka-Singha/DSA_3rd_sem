//NAME-ARKA SINGHA
//Roll No. 2230068
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n) {
    int i, maxIndex, minIndex;
    int maxValue, minValue;

    if (n <= 1)
        return;

    maxIndex = minIndex = 0;
    maxValue = minValue = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
        else if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }

    // Swap the maximum value to the end (for selection sort)
    int temp = arr[n - 1];
    arr[n - 1] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    int largestCount = 0;
    int mostSignificant = arr[n - 1];

    for (int i = n - 1; i >= 0 && arr[i] == mostSignificant; i--) {
        largestCount++;
    }

    printf("Most significant number: %d\n", mostSignificant);
    printf("Count of the largest number: %d\n", largestCount);
    printf("Memory location of the largest number: %p\n", (void*)&arr[n - 1]);
    printf("Memory location of the smallest number: %p\n", (void*)&arr[0]);

    free(arr); // Don't forget to free the dynamically allocated memory

    return 0;
}
