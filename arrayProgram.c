
#include <stdio.h>

int main()
{
    int num[5];
    int i, z;
    int count = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    }

    printf("Enter a number to search: ");
    scanf("%d", &z);

    for (i = 0; i < 5; i++)
    {
        if (z == num[i])
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("Number %d is not in the array.\n", z);
    }
    else
    {
        printf("Number %d matched %d time(s).\n", z, count);
    }

    return 0;
}
