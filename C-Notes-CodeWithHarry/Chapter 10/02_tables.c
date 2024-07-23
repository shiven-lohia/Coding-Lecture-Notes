#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);
    return 0;
}