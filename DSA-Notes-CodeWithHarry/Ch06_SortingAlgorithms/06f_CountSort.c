#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int *A, int n)
{
    int i, j;

    // Find the maximum element in A
    int max = maximum(A, n);

    // Create the count array with 0 at every index
    int *count = (int *)calloc((max + 1), sizeof(int));

    // Incrementing the corresponding index in count array
    for (i = 0; i < n; i++)
    {
        count[A[i]]++;
    }

    i = 0; // counter for count array
    j = 0; // counter for given array

    // Sorting given array using the count array
    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int A[] = {9, 14, 4, 8, 7, 5, 6};
    int n = 7;

    printArray(A, n);
    countSort(A, n);
    printArray(A, n);

    return 0;
}