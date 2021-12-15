#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
char stack_underflow(void);

char contents[STACK_SIZE];
int top = 0;
bool is_stack_overflow_call = false;
bool is_stack_underflow_call = false;

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(char i) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = i;
  }
}

char pop(void) {
  if (is_empty()) {
    return stack_underflow();
  } else {
    return contents[--top];
  }
}

void stack_overflow(void) {
  is_stack_overflow_call = true;
  printf("stack_overflow\n");
}

char stack_underflow(void) {
  is_stack_underflow_call = true;
  return '-';
}

int main(int argc, char const *argv[]) {
  char ch, left;
  bool is_success = true;
  printf("Enter parenteses and/or braces: ");

  while (true) {
    if (is_stack_overflow_call) {
      exit(0);
    }

    ch = getchar();
    if (ch == '{' || ch == '(') {
      push(ch);
    } else if (ch == '}' || ch == ')') {
      left = pop();
      if ((ch == '}' && left != '{') || (ch == ')' && left != '(')) {
        is_success = false;
        break;
      }
    } else if (ch == '\n') {
      if (is_empty()) {
        is_success = true;
        break;
      } else if (!is_empty() || is_stack_underflow_call) {
        is_success = false;
        break;
      }
    }
  }

  if (is_success) {
    printf("Parenteses/braces are nested properly\n");
  } else {
    printf("Parenteses/braces are not nested properly\n");
  }
  return 0;
}