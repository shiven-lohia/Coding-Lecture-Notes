#include <stdio.h>

int main()
{

    int a, b, c, d, n;
    printf("Enter the 4 numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c & a > d)
        n = a;
    if (b > a && b > c & b > d)
        n = b;
    if (c > b && c > a & c > d)
        n = c;
    if (d > b && d > c & d > a)
        n = d;

    printf("Greatest number is: %d", n);

    return 0;
}