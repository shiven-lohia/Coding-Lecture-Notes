#include <stdio.h>

int main()
{

    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &num[2];
    printf("%d", *(ptr + 5));

    return 0;
}