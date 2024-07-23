#include <stdio.h>

int main()
{

    int n, counter = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            counter++;
    }

    if (counter == 2)
        printf("PRIME");
    else
        printf("NOT PRIME");

    return 0;
}