#include <stdio.h>
#include <string.h>

int main() {
    
    char s[50];
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
    printf("%s\n",s);
    puts(s);

    return 0;
}