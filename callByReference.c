#include <stdio.h>
int multiply(int *x, int *y); // function prototype

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    multiply(&a, &b);

    return 0;
}

int multiply(int *x, int *y)
{
    *x = *x * 10;
    *y = *y * 10;
    printf("The value of x and y: %d %d\n", *x, *y);
}
