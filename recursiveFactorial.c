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
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}