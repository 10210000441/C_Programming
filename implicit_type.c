#include <stdio.h>
int main()
{

    // Implict Type Conversion//
    int x = 10;
    char y = 'A';
    x = x + y;
    printf("The value of x is: %d\n", x);

    float z = x + 1.0;
    printf("The value of z is: %.2f\n", z);

    return 0;
}