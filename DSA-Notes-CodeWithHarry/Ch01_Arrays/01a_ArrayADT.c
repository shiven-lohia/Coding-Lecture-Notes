#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int totalSize;
    int usedSize;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize)
{
    a->totalSize = tSize;
    a->usedSize = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setVal(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->usedSize; i++)
    {
        printf("Enter value of %dth element:\n", i + 1);
        scanf("%d", &n);
        (a->ptr)[i]=n;
    }
}

void show(struct myArray *a) //NOT WORKING CORRECTLY
{
    for (int i = 0; i < a->usedSize; i++)
    {
        int n=(a->ptr)[i];
        printf("The value of %dth element is: %d\n", i + 1, n);
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks,10,6);
    setVal(&marks);
    show(&marks);

    return 0;
}