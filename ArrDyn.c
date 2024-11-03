#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 2, c = 3;
    int **ar = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++) {
        ar[i] = (int *)malloc(c * sizeof(int));
    }

    printf("Enter %d numbers:", r * c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &ar[i][j]);
        }
    }

    printf("Numbers:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < r; i++) {
        free(ar[i]);
    }
    free(ar);

    return 0;
}
