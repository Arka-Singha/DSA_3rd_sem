#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; 

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Error: Array size cannot exceed 100.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int snd_large=0;
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            snd_large = largest;
            largest = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", largest);
    printf("The 2nd largest number in the array is: %d\n", snd_large);


    return 0;
}
