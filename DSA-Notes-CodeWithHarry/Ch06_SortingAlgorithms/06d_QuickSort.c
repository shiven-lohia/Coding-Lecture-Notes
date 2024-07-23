#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int *A, int low, int high)
{
    int pivot = A[low];
    int i = low + 1, j = high;

    do
    {
        while (A[i] <= pivot)
        {
            if (i >= high)
                break;
            i++;
        }
        while (A[j] > pivot)
        {
            if (j <= low)
                break;
            j--;
        }
        if (i < j)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    int temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int *A, int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);  // sort left subarray
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 12, 3, 5, 2, 45, 69};
    int n = 10;

    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);

    return 0;
}