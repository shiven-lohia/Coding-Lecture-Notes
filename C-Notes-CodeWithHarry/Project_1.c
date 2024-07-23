#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int number, n, guesses = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("I have chosen a random number between 1 & 100. Try and guess it!\nEnter your initial guess:\n");
    scanf("%d", &n);

    do
    {
        guesses++;
        if (n == number)
        {
            printf("You got it! Number of guesses=%d", guesses);
            break;
        }
        if (n > number)
            printf("Try Lower!\n");
        if (n < number)
            printf("Try Higher!\n");
        scanf("%d", &n);
    } while (1 > 0);

    return 0;
}