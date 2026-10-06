#include <stdio.h>

int main()
{
    // int i, j;
    // i = 1;
    // while (i <= 7)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         printf("* ");
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    // }

    int i, j;
    i = 1;
    for (i = 1; i <= 7; i++)
    {
        j = 1;
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // int i, j, spaces;
    // for (i = 1; i <= 7; i++)
    // {

    //     for (spaces = 1; spaces <= 7 - i; spaces++)
    //     {
    //         printf(" ");
    //     }

    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    return 0;
}