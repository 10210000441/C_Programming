#include <stdio.h>

void swap(int *a, int *b); // function prototype

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("The swapped numbers are x = %d and y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}