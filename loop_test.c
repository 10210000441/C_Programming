#include <stdio.h>

int main()
{
    int flag = 1, num, sum = 0;
    char ch;
    while (flag)
    {
        printf("\nEnter the number: ");
        scanf("%d", &num);
        sum = sum + num;

        printf("\nIf you want to add another number , enter 1 else enter 0: ");
        scanf(" %d", &flag);
    }
    printf("\nThe sum of the numbers is: %d", sum);

    return 0;
}