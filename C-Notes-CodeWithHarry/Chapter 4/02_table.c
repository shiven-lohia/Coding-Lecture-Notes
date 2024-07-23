#include <stdio.h>

int main() {
    
    int n,i;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Okay, Here's the multiplication table of %d\n", n);

    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }

    return 0;
}