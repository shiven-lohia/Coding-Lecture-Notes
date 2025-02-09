#include <stdio.h>

// hint:
// fib(n)=fib(n-1)+fib(n-2)

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{

    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);

    printf("%d is the %dth element of the fibonacci series", fibonacci(n), n);

    return 0;
}

