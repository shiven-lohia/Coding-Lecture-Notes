#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter marks in the 3 subjects:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= 33 && b >= 33 && c >= 33 && (a + b + c) / 3 >= 40)
        printf("PASS");
    else
        printf("FAIL");

    return 0;
}