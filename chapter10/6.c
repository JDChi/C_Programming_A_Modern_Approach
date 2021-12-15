#include <stdbool.h>
#include <stdio.h>

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

#define STACK_SIZE 100
char contents[STACK_SIZE];
int top = 0;

int main(int argc, char const *argv[]) {
  char ch;
  int result = 0;
  int first, second;

  printf("Enter an RPN expression: ");
  do {
    scanf(" %c", &ch);
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
      if (is_empty()) {
        printf("Not enough operands in expression\n");
        break;
      }

      first = pop();

      if (is_empty()) {
        printf("Not enough operands in expression\n");
        break;
      }

      second = pop();

      if (ch == '+') {
        result = first + second;
      } else if (ch == '-') {
        result = second - first;
      } else if (ch == '*') {
        result = first * second;
      } else {
        result = second / first;
      }
      push(result);
    } else if (ch == '=') {
      printf("Value of expression: %d\n", result);
      make_empty();
      printf("Enter an RPN expression: ");
    } else {
      if (is_full()) {
        printf("Expression is too complex\n");
        break;
      }
      push(ch - '0');
    }

  } while ((ch - '0' >= 0 && ch - '0' <= 9) || (ch == '+') || (ch == '-') ||
           (ch == '*') || (ch == '/') || (ch == '='));

  return 0;
}

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
