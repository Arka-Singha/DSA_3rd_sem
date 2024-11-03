#include <stdio.h>

int main() {
  int a[3] = {2, 3, 2};
  int b[3] = {-1, 0, 1};
  int c[7] = {0,0,0,0,0,0,0}; // This array is large enough to store the product polynomial of degree 3.

  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
      c[i + j] += (a[i] * b[j]);
    }
  }

  for (int i = 0; i < 7; i++) {
    printf("%d\t", c[i]);
  }

  return 0;
}
