#include <stdio.h>
#include <string.h>

int main()
{

    char st2[50], st1[50], c;
    int i = 0;

    printf("Enter first string:\n");
    scanf("%s", st1);

    printf("Enter second string letter-by-letter:\n");

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';

    printf("The value of st1 is: %s\n", st1);
    printf("The value of st2 is: %s\n", st2);

    if (strcmp(st1, st2) == 0)
        printf("The strings are equal!");

    return 0;
}