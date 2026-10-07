#include <stdio.h>
int power(int a, int b); // function prototype

int main()
{
    int x, y, result;
    printf("Enter a x  and y: ");
    scanf("%d %d", &x, &y);
    result = power(x, y);
    printf("%d raised to the power of %d is %d.\n", x, y, result);

    return 0;
}

int power(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }
    return result;
}
