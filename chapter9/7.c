#include <stdio.h>

int power(int x, int n);

int main(int argc, char const *argv[]) {
  int x, n;
  printf("Enter x: ");
  scanf("%d", &x);
  printf("Enter n: ");
  scanf("%d", &n);
  int result = power(x, n);
  printf("result = %d\n", result);
  return 0;
}

int power(int x, int n) {
  if (n == 0) {
    return 1;
  } else if (n % 2 == 0) {
    int result = power(x, n / 2);
    return result * result;
  } else {
    return x * power(x, n - 1);
  }
}