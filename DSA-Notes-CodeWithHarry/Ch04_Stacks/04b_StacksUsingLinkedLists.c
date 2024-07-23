#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Node *top)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}

struct Node *push(struct Node *top, int x)
{
    if (!isFull(top))
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
    printf("Stack Overflow! (Cannot push %d into the stack)\n", x);
    return top;
}

int pop(struct Node **top) {
    if(!isEmpty(*top)) {
        struct Node* n= *top;
        *top=(*top)->next;
        int x=n->data;
        free(n);
        return x;
    }
    printf("Stack Underflow! (Cannot Pop)\n");
    return -1;
}

int main()
{
    struct Node *top = NULL;

    //Test before pushing
    printf("Before pushing isEmpty: %d\n", isEmpty(top));

    //Pushing elements into the stack
    top = push(top,78);
    top = push(top,69);
    top = push(top,6);
    top = push(top,9);

    //Test after pushing
    printf("\n");
    linkedListTraversal(top);
    printf("After pushing isEmpty: %d\n", isEmpty(top));

    //Popping elements from the stack
    int x=pop(&top);
    printf("Element %d was popped from the stack\n",x);

    //Test after popping
    printf("\n");
    linkedListTraversal(top);

    return 0;
}