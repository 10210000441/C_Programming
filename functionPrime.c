#include <stdio.h>
#include <stdbool.h>

bool isPrime(int);

int main()
{
    int n, status;

    printf("Enter the integer: ");
    scanf("%d", &n);

    status = isPrime(n);

    if (status == 1)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}

bool isPrime(int n)
{
    int i;

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    if (i == n)
    {
        return true;
    }
    return false;
}