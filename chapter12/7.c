#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(int argc, char const *argv[]) {
  int b[N], i, big, small;

  printf("Enter %d numbers: ", N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &b[i]);
  }

  max_min(b, N, &big, &small);

  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);
  return 0;
}

void max_min(int a[], int n, int *max, int *min) {
  *max = *min = a[0];

  int *p;

  // a[n] 虽然不存在，但使用取地址运算符是合法的，循环不会尝试检查 a[n] 的值
  for (p = &a[1]; p < &a[n]; p++) {
    if (*p > *max) {
      *max = *p;
    } else if (*p < *min) {
      *min = *p;
    }
  }
}