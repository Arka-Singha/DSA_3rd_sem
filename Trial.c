#include <stdio.h>

int check_even_odd(int num) {
  if (num % 2 == 0) {
    return 0; // Even
  } else {
    return 1; // Odd
  }
  return 5;
}

int main() {
  int num = 11;

  num=check_even_odd(num);
  printf("%d", num);
  return 0;
}
