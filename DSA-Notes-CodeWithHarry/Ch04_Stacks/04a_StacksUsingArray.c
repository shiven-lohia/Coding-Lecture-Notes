#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! (Cannot push %d to the stack) \n", val);
        return 0;
    }
    (ptr->top)++;
    ptr->arr[ptr->top] = val;
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! (Cannot pop from the stack as it is empty)\n");
        return -1;
    }
    int val = ptr->arr[ptr->top];
    (ptr->top)--;
    return val;
}

int peek(struct stack *ptr, int i)
{
    int arrayInd = ptr->top - i + 1;
    if (arrayInd < 0)
    {
        printf("Invalid peek input!\n");
        return -1;
    }
    else
    {
        return ptr->arr[arrayInd];
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack has been created successfully!\n");

    // Check status of stack before pushing
    printf("Before pushing isFull: %d\n", isFull(s));
    printf("Before pushing isEmpty: %d\n", isEmpty(s));

    // push test
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    push(s, 6);
    push(s, 7);
    push(s, 8);
    push(s, 9);
    push(s, 10);

    // Check status of stack after pushing
    printf("After pushing isFull: %d\n", isFull(s));
    printf("After pushing isEmpty: %d\n", isEmpty(s));

    // pop test
    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));

    // Check status of stack after popping
    printf("After popping isFull: %d\n", isFull(s));
    printf("After popping isEmpty: %d\n", isEmpty(s));

    // reading all values using peek function
    for (int j = 1; j <= s->top + 1; j++)
    {
        printf("The value at position %d is: %d\n", j, peek(s,j));
    }

    return 0;
}