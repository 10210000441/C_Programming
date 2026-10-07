#include <stdio.h>
int add(int a, int b, int c); // function prototype
int main()
{
    int x, y, z, result;
    x = 10;
    y = 20;
    z = 30;
    result = add(x, y, z);
    printf("The sum is: %d\n", result);
    return 0;
}

int add(int a, int b, int c)
{
    int sum;
    sum = a + b + c;
    return sum;
}