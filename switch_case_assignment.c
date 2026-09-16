#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("You entered 1, I think you are so sweet\n");
        break;
    case 2:
        printf("You entered 2, You are go getter\n");
        break;
    case 3:
        printf("You entered 3, You are very kind\n");
        break;
    case 4:
        printf("You entered 4, You are very fearless\n");
        break;
    case 5:
        printf("You entered 5, You are very confident\n");
        break;
    case 6:
        printf("You entered 6, You are very fun\n");
        break;
    case 7:
        printf("You entered 7, Congratulations!!! You won 1 million Ngultrums=!!\n");
        break;
    case 8:
        printf("You entered 8, I'm Sorry!!!!!\n");
        break;
    case 9:
        printf("You entered 9, Nine is my lucky number\n");
        break;
    case 10:
        printf("You entered 10, Sorry, Try your luck next time!\n");
        break;
    default:
        printf("Invalid num\n");
    }
    return 0;
}