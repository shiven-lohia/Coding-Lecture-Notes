#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{

    int a = 3, b = 2;
    swap(&a, &b);
    printf("a=%d\nb=%d\n", a, b);

    return 0;
}
