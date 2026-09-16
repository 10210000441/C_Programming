#include <stdio.h>
int main()
{
    // Explicit Type Conversion//
    double p = 1.2;
    int sum = (int)p + 1;
    printf("The value of sum is: %d\n", sum);

    float s = 1.5;
    int t = (int)s;
    printf("s = %.2f\n", s);
    printf("t = %d\n", t);

    return 0;
}