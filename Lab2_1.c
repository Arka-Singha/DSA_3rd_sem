//NAME-ARKA SINGHA
//Roll No. 2230068
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i; j++) {
            if (arr[j] < arr[j+1]) {
                // Swapping
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
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
    
    bubbleSort(arr, n);
    
    printf("Smallest element: %d\n", arr[n-1]);
    printf("Most significant element: %d\n", arr[0]);
    
    free(arr); //to free the dynamically allocated memory
    
    return 0;
}
