#include <stdio.h>
int main()
{
    int n;
    printf("Enter num : ");
    scanf("%d", &n);

    int rem = 0;
    while (n != 0)
    {
        rem += n % 10;
        n = n / 10;
    }
    printf("%d", rem);
}