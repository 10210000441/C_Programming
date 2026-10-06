#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("The %d is Even", a);
    }
    else
    {
        printf("The %d is Odd", a);
    }

    return 0;
}