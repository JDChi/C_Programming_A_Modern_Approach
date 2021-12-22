#include <stdbool.h>
#include <stdio.h>

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
int evaluate_RPN_expresion(const char *expression);

#define STACK_SIZE 100
char contents[STACK_SIZE];
int top = 0;

int main(int argc, char const *argv[]) {
  char ch;
  int result = 0;
  int first, second;

  char expression[30];

  while (true) {
    printf("Enter an RPN expression: ");
    gets(expression);
    if ((*expression - '0' >= 0 && *expression - '0' <= 9) ||
        (*expression == '+') || (*expression == '-') || (*expression == '*') ||
        (*expression == '/') || (*expression == '=')) {
      int result = evaluate_RPN_expresion(expression);
      printf("Value of expression: %d\n", result);
    } else {
      break;
    }
  }

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

int evaluate_RPN_expresion(const char *expression) {
  int result = 0;
  int first, second;
  while (*expression) {
    if (*expression == '+' || *expression == '-' || *expression == '*' ||
        *expression == '/') {
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

      if (*expression == '+') {
        result = first + second;
      } else if (*expression == '-') {
        result = second - first;
      } else if (*expression == '*') {
        result = first * second;
      } else {
        result = second / first;
      }
      push(result);
    } else if (*expression == '=') {
      // printf("Value of expression: %d\n", result);
      make_empty();
      // printf("Enter an RPN expression: ");
      return result;

    } else {
      if (is_full()) {
        printf("Expression is too complex\n");
        break;
      } else if (*expression != ' ') {
        push(*expression - '0');
      }
    }
    expression++;
  }
  return 0;
}