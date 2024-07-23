#include <stdio.h>

int main() {
    
    int marks[5];
    int *ptr=marks;

    for(int i=0; i<=4; i++){
        printf("Enter marks for student %d:\n",i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for(int i=0; i<=4; i++){
        printf("Marks obtained by student %d is %d \n", i+1, marks[i]);
    }

    return 0;
}