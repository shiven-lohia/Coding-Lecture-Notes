#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
            return 0;
        if (prev != NULL && root->data <= prev->data)
            return 0;
        prev = root;
        return isBST(root->right);
    }
    else
        return 1;
}

int main()
{
    // Creating the nodes
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    // Linking each node with its children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // // Preorder traversal check
    // printf("Preorder traversal gives:\n");
    // preorder(p);
    // printf("\n");

    // // Postorder traversal check
    // printf("Postorder traversal gives:\n");
    // postorder(p);
    // printf("\n");

    // Checks if the tree is a BST
    printf("isBST: %d\n", isBST(p));

    // Inorder traversal check (Gives ascending order if tree is a BST)
    printf("Inorder traversal gives:\n");
    inorder(p);
    printf("\n");

    return 0;
}