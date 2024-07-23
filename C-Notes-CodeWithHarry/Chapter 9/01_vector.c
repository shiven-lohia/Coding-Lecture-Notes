#include <stdio.h>

typedef struct vectordef {
    int x;
    int y;
} vector;

int main() {
    vector v1;
    v1.x=10;
    v1.y=15;
    printf("The vector is: %di + %dj",v1.x,v1.y);
    return 0;
}