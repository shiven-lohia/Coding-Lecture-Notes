#include <stdio.h>
#include <string.h>

void encrypt(char *ptr) {
    while(*ptr!='\0') {
        *ptr+=1;
        ptr++;
    }

}

int main() {
    
    char st[]="Hi, my name is Shiven";
    encrypt(st);
    printf(st);

    return 0;
}

