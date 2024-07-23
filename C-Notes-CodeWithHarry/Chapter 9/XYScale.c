#include <stdio.h>
#include <conio.h>

int findY()
{
    printf("\033[1;31m*** Starting the calculation of y! ***\033[1;0m\n");

    int y = 4;
    int male_frnd = 0, swear = 0, loudness = 0, insta = 0, exes = 0;

    printf("How many male friends does she have?\nEnter 0 for 0 friends, 1 for 1-5 friends, 2 for 6-10 friends, 3 for more than 10 : ");
    scanf("%d", &male_frnd);
    printf("How ofter does she swear in a day?\nEnter 0 for not at all, 1 for rarely, 2 for often, 3 for very often : ");
    scanf("%d", &swear);
    printf("How loud is she?\nEnter 0 for normal, 1 for somethimes loud, 2 for really loud : ");
    scanf("%d", &loudness);
    printf("How many exes does she have?\n (Enter 0 for none): ");
    scanf("%d", &exes);
    printf("How crazy is her insta rate between 0-3, 3 for super crazy, hot pics etc : ");
    scanf("%d", &insta);

    y += (male_frnd + loudness + swear + insta + 2 * exes);

    if (y >= 10)
    {
        y = 10;
    }

    printf("Her y score is : %d\n ", y);
    return y;
}

int main()
{
    int x, y, isYKnown;
    char exitStatus;

    printf("\033[1;31m*** Welcome to the HC Scale Calculator! ***\033[1;0m\n");

    printf("Enter the value of x:\n");
    scanf("%d", &x);

    if (x <= 5)
    {
        printf("\033[1;31mNO GO ZONE!\033[1;0m");
        return 0;
    }

    printf("Do you already know the value of y? (Enter 1 for YES and 0 for NO)\n");
    scanf("%d", &isYKnown);

    if (isYKnown)
    {
        printf("Enter the value of y:\n");
        scanf("%d", &y);
    }
    else
    {
        y = findY();
    }

    if (y < 4)
    {
        printf("\033[1;33mNOT POSSIBLE!\033[1;0m");
        return 0;
    }

    if (x > 5)
    {
        if ((y - 4) > (0.6 * x))
        {
            printf("\033[1;31mDANGER ZONE!\033[1;0m");
        }
        else
        {
            if (x < 8)
            {
                printf("\033[1;35mFUN ZONE!\033[1;0m");
            }
            else if (x == 8)
            {
                if (y <= 5)
                {
                    printf("\033[1;35mFUN ZONE!\033[1;0m(almost \033[1;37mUNICORNS DON'T EXIST!\033[1;0m)");
                }
                else if (y <= 7)
                {
                    printf("\033[1;35mFUN ZONE!\033[1;0m(can be \033[1;32mWIFE ZONE!\033[1;0m)");
                }
                else
                {
                    printf("\033[1;35mFUN ZONE!\033[1;0m(can be \033[1;36mDATE ZONE!\033[1;0m)");
                }
            }
            else
            {
                if (y <= 5)
                {
                    printf("\033[1;37mUNICORNS DON'T EXIST!\033[1;0m");
                }
                else if (y <= 7)
                {
                    printf("\033[1;32mWIFE ZONE!\033[1;0m");
                }
                else
                {
                    printf("\033[1;36mDATE ZONE!\033[1;0m");
                }
            }
        }
    }

    printf("\nPress any key to exit!");

    exitStatus = getch();
    int b = exitStatus;
    if (b <= 255)
    {
        return 0;
    }

    return 0;
}