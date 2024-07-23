#include <stdio.h>
#include <string.h>

void decrypt(char *ptr) {

    while(*ptr!='\0') {
        *ptr-=1;
        ptr++;
    }

}

int main() {
    
    char st[]="Ij-!nz!obnf!jt!Tijwfo";
    decrypt(st);
    printf(st);

    return 0;
}