#include <stdio.h>

// Program to print multiplication tables with interactive UI

void multiply(int *table, int num, int n);

int main()
{

    int order, n_numbers;

    printf("Enter the desired order for the multiplication tables:\n");
    scanf("%d", &order);

    printf("How many numbers do you want to print the tables for?\n");
    scanf("%d", &n_numbers);

    int table[n_numbers][order], num[n_numbers];

    printf("Enter the numbers:\n");

    for (int i = 0; i < n_numbers; i++)
    {
        int n;
        scanf("%d", &n);
        num[i] = n;
    }

    printf("\n\n****************************************************\n\n");

    for (int i = 0; i < n_numbers; i++)
    {
        multiply(table[i], num[i], order);
    }

    return 0;
}

void multiply(int *table, int num, int n)
{
    printf("\nMultiplication table of %d is:\n", num);

    for (int i = 0; i < n; i++)
    {
        table[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, table[i]);
    }

    printf("\n\n****************************************************\n\n");
}