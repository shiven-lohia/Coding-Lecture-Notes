#include <stdio.h>

int main() {
    
    float income;
    float rate;
    printf("Enter your income:\n");
    scanf("%f",&income);

    if(income>1000000) rate=30;
    else if(income>500000) rate=20;
    else if(income>250000) rate=5;
    else rate=0;

    float tax= (rate/100)*income;
    printf("Tax to be paid = %f", tax);
 
    return 0;
}   