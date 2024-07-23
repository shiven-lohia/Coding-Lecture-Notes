#include <stdio.h>

int main()
{

    char c;
    printf("Enter charachter:\n");
    scanf("%c", &c);

    if (c >= 97 && c <= 112)
        printf("LOWERCASE");
    else
        printf("NOT LOWERCASE");

    return 0;
}