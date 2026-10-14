
#include <stdio.h>

int num(int a, int b); // Function prototype

int main()
{
    int x, y, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    product = num(x, y);

    printf("The product is: %d\n", product);

    return 0;
}

int num(int a, int b)
{
    return a * b;
}
