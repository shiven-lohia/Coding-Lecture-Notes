#include <stdio.h>

int main()
{
    int a, b, c, d;
    FILE *ptr;
    ptr = fopen("integers.txt", "r");
    fscanf(ptr, "%d %d %d %d", &a, &b, &c, &d);
    printf("The values of a,b,c and d is %d,%d,%d and %d\n", a, b, c, d);
    fclose(ptr);
    return 0;
}