#include <stdio.h>
int main()
{
    int i;

    // for (i = 0; i <= 255; i++)
    // {
    //     printf("%c\n", i);
    // }

    // while (i <= 255)
    // {
    //     printf("%c\n", i);
    //     i++;
    // }

    for (i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    // for (i = 0; i <= 100; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    return 0;
}
