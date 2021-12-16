#include <stdio.h>

#define N 7

void quicksort(int *low, int *high);
int *split(int *low, int *high);

int main(int argc, char const *argv[]) {
  int a[N], i;
  printf("Enter %d numbers to be sorted: ", N);
  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }
  int *low = a;
  int *high = &a[N];

  quicksort(low, high);
  printf("In sorted order: ");
  for (i = 0; i < N; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

void quicksort(int *low, int *high) {
  // compare location here
  if (low >= high) {
    return;
  }
  int *middle = split(low, high);
  quicksort(low, middle - 1);
  quicksort(middle + 1, high);
}

int *split(int *low, int *high) {
  int part_element = *low;
  for (;;) {
    while (low < high && part_element <= *high) {
      high--;
    }
    if (low >= high) {
      break;
    }

    *low = *high;
    low++;

    while (low < high && *low <= part_element) {
      low++;
    }
    if (low >= high) {
      break;
    }

    *high = *low;
    high--;
  }
  *high = part_element;

  return high;
}
