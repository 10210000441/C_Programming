#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a grade: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Well done\n");
        break;
    case 'C':
        printf("You passed\n");
        break;
    case 'D':
        printf("Better try again\n");
        break;
    case 'F':
        printf("You failed\n");
        break;
    default:
        printf("Invalid grade\n");
    }
    return 0;
}