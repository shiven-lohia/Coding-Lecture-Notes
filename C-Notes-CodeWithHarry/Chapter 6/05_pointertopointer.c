#include <stdio.h>

int main()
{

    int i = 3;
    int *j = &i, **k = &j;
    printf("%d", **k);

    return 0;
}