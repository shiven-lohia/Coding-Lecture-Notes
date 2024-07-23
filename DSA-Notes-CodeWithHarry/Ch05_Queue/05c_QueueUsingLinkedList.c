#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *f = NULL;
struct Node *r = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void enqueue(int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Queue is full!\n");
    }
    else
    {
        ptr->data = val;
        ptr->next = NULL;
        if (f == NULL)
        {
            f = r = ptr;
        }
        else
        {
            r->next = ptr;
            r = ptr;
        }
    }
}

int dequeue()
{
    struct Node *ptr = f;
    int val = -1;
    if (f == NULL)
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return (val);
}

int main()
{
    // Enqueue some elements
    enqueue(10);
    enqueue(9);
    enqueue(8);
    enqueue(7);
    printf("\n");

    // Enqueue test
    printf("Printing all the elements of the queue:\n");
    linkedListTraversal(f);
    printf("\n");

    // Dequeue some elements
    printf("Dequeued element: %d\n", dequeue(f));
    printf("Dequeued element: %d\n", dequeue(f));
    printf("Dequeued element: %d\n", dequeue(f));
    printf("\n");

    // Dequeue test
    printf("Printing all the elements of the queue:\n");
    linkedListTraversal(f);
    printf("\n");

    return 0;
}