#include <stdio.h>

float CtoF(float Celcius)
{
    return (Celcius*9/5+32);
}

int main() {
    
    float C;
    printf("Enter temperature in 'C\n");
    scanf("%f", &C);
    float F=CtoF(C);
    printf("%0.01f'C = %0.01f'F",C,F);
    return 0;
}
