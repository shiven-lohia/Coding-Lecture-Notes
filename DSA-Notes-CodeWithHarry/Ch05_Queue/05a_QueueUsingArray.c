#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
        return 1;
    return 0;
}

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
        return 1;
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow!\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
        if (isEmpty(q))
        {
            q->r = q->f = -1;
        }
    }

    return a;
}

int main()
{
    // Initialising the queue
    struct queue q;
    q.size = 2;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    if (isEmpty(&q))
    {
        printf("Queue is Empty!\n");
    }
    if (isFull(&q))
    {
        printf("Queue is Full!\n");
    }

    // Enqueue some elements
    enqueue(&q, 12);
    enqueue(&q, 15);

    if (isEmpty(&q))
    {
        printf("Queue is Empty!\n");
    }
    if (isFull(&q))
    {
        printf("Queue is Full!\n");
    }

    // Dequeue some elements
    printf("Dequeuing element: %d\n", dequeue(&q));
    printf("Dequeuing element: %d\n", dequeue(&q));

    if (isEmpty(&q))
    {
        printf("Queue is Empty!\n");
    }
    if (isFull(&q))
    {
        printf("Queue is Full!\n");
    }

    return 0;
}