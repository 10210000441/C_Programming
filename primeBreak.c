#include <stdio.h>
int main()
{
    int i, n;
    for (n = 2; n <= 100; n++)

    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            printf("%d ", n);
        }
    }
    return 0;
}

// This code snippet is a C program that prints all prime numbers between 2 and 100. It uses nested loops to check each number in that range for primality. The outer loop iterates through each number `n` from 2 to 100, while the inner loop checks if `n` is divisible by any number `i` from 2 to `n-1`. If a divisor is found, the inner loop breaks, and the program moves on to the next number. If no divisors are found (i.e., `i` equals `n`), it prints the number as a prime number.