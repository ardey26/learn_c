#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
  int arr[MAX_SIZE];
  int top;
} Stack;

void initialize(Stack *stack) {
  stack->top=-1; // Empty, given zeroth index.
};

bool isEmpty(Stack *stack) {
    return stack->top == -1;
};

bool isFull(Stack *stack) {
  return stack->top == MAX_SIZE - 1;
};

void push(Stack *stack, int value) {
  if (isFull(stack)) {
    printf("Stack Overflow\n");
    return;
  };

  stack->arr[++stack->top] = value;
  printf("Stacked %d onto the top\n", value);
  return;
};

int pop(Stack *stack) {
  if (isEmpty(stack)) {
    printf("Stack doesn't have values.\n");
    return -1;
  };

  int currTop = stack->arr[stack->top];
  stack->top--;
  printf("Popped %d from the top\n", currTop);
  return currTop;
};

int peek(Stack *stack) {
  if(isEmpty(stack)) {
    printf("Stack is empty.\n");
    return -1;
  };
  return stack->arr[stack->top];
};

void reset(Stack *stack) {
  stack->top=-1;
  memset(stack->arr, 0, sizeof stack->arr);

  printf("Stack reset. Current top: %d\n", stack->top);
  
};



int main() {
  Stack stack;

  initialize(&stack);

  printf("Current TOP: %d\n", peek(&stack));
  
  push(&stack, 1);
  push(&stack, 2);
  push(&stack, 3);
  push(&stack, 4);

  printf("TOP INDEX: %d\n", peek(&stack));

  pop(&stack);
  printf("TOP INDEX: %d\n", peek(&stack));

  reset(&stack);

  for(int i=0; i<=100; i++) {
      printf("Adding %d...\n", i);
      push(&stack, i);
      printf("\n");
    }
  
  
return 0;
}
