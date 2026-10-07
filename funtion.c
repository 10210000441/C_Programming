#include <stdio.h>
void greet(); // function prototype or function declaration

int main()
{
    greet();
    printf("This is the main function.\n");
    return 0;
}

// Function definition
void greet()
{
    printf("Hello, Phub!\n");
}
