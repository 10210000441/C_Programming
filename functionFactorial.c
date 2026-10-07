#include <stdio.h>

int factorial(int n);

int main()
{
    int n, result;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    result = factorial(n);
    printf("The factorial of %d is %d.\n", n, result);

    return 0;
}

int factorial(int n)
{
    int i = 1;
    int f = 1;
    while (i <= n)
    {
        f = f * i;
        i++;
    }
    return f;
}