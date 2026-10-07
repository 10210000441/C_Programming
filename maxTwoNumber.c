#include <stdio.h>
int maximun(int a, int b); // function prototype

int main()
{
    int x, y, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    max = maximun(x, y);
    return 0;
}

int maximun(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}