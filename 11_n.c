#include <stdio.h>
#include <math.h>
int main() {
    int i, n;
    printf("a");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%.0lf\n", pow(11.0, i));
    }

    return 0;
}