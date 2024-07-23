#include <stdio.h>

int main() {
    
    int i=3;
    int *j=&i;
    printf("Address of i=%u\n",j);
    printf("Value of i using j=%d",*j);

    return 0;
}