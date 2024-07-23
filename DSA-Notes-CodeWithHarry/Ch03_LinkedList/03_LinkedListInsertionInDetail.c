#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct node *insertAtFirst(struct node *head, int dTI)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = dTI;

    return ptr;
}

struct node *insertAtIndex(struct node *head, int dTI, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = dTI;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct node *insertAtEnd(struct node *head, int dTI)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    ptr->data = dTI;
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

int main()
{
    int dataToInsert;
    int indexToInsertAt;

    // Linked List Creation
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = NULL;

    // Printing the initial Linked list
    printf("The Initial Linked List is:\n");
    linkedListTraversal(head);

    printf("\n");

    // Inserting an element at the beginning of the Linked List
    printf("Enter the data to be inserted in the beginning: ");
    scanf("%d", &dataToInsert);
    printf("\n");

    head = insertAtFirst(head, dataToInsert);
    printf("The Linked List after insertion in the beginning is:");
    printf("\n");
    linkedListTraversal(head);
    printf("\n");

    // Inserting an element in between the Linked List
    printf("Enter the data to be inserted in between: ");
    scanf("%d", &dataToInsert);

    printf("Enter the index at which data needs to be inserted: ");
    scanf("%d", &indexToInsertAt);
    printf("\n");

    head = insertAtIndex(head, dataToInsert, indexToInsertAt);
    printf("The Linked List after insertion in between is:");
    printf("\n");
    linkedListTraversal(head);
    printf("\n");

    // Inserting an element at the end of the Linked List
    printf("Enter the data to be inserted at the end: ");
    scanf("%d", &dataToInsert);
    printf("\n");

    head = insertAtEnd(head, dataToInsert);
    printf("The Linked List after insertion at the end is:");
    printf("\n");
    linkedListTraversal(head);

    return 0;
}