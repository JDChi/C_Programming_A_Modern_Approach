#include "stack.h"

#define STACK_SIZE 100

int top = 0;
char contents[STACK_SIZE];

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(int i) {
  // printf("push = %d\n", i);
  contents[top++] = i;
}

int pop(void) {
  int i = contents[--top];
  // printf("pop = %d\n", i);
  return i;
}