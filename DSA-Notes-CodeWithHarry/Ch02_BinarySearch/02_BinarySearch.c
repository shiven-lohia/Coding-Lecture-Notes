#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int n, int size)
{
    int low = 0, high = size - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == n)
            return mid;
        if (arr[mid] < n)
            low = mid + 1;
        if (arr[mid] > n)
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int sortedArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num = 9, size = 9;
    int occurence = binarySearch(sortedArray, num, size);
    printf("The number %d is present in the array at index: %d\n", num, occurence);
    return 0;
}