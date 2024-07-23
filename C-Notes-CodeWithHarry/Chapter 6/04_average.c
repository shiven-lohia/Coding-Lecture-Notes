#include <stdio.h>

int sum(int *x, int *y);
float avg(int *x, int *y);

int main()
{

    int a = 3, b = 9;
    int sumstore = sum(&a, &b);
    float avgstore = avg(&a, &b);
    printf("sum=%d\navg=%0.01f", sumstore, avgstore);

    return 0;
}

int sum(int *x, int *y)
{
    return (*x + *y);
}

float avg(int *x, int *y)
{
    return ((*x + *y) / 2);
}