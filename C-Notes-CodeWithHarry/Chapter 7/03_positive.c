#include <stdio.h>

void countPositive(int *arr, int n);

int main()
{

    int arr[5] = {-2, 1, 0, 1, 2};
    countPositive(arr, 5);

    return 0; 
}

void countPositive(int *arr, int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            counter++;
    }
    printf("The Array has %d positive elements!\n", counter);
}