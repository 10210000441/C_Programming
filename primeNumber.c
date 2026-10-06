#include <stdio.h>

int main()
{
    int prime, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (prime = 2; prime < n; prime++)
    {
        if (n % prime == 0)
        {
            printf("%d is not a prime number\n", n);
            break;
        }
    }
    if (prime == n)
    {
        printf("%d is a prime number\n", n);
    }
    return 0;
}