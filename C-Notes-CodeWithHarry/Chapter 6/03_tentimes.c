#include <stdio.h>

void ten_times(int *x);

int main() {
    
    int a=3;
    ten_times(&a);

    return 0;
}

void ten_times(int *x) 
{
    *x*=10;
    printf("%d",*x);
}