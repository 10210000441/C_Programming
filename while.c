#include <stdio.h>
int main()
{
    // int number, sum;
    // number = 1;
    // sum = 0;
    // while (number <= 10)
    // {
    //     sum = sum + number;
    //     printf("%d\n", sum);
    //     number++; //incrementing the value of number by 1
    // }

    int i =1;
    int sum = 0;
    int n;
    int num;

    printf("How many values do you want to add: "); //asking the user how many numbers they want to add
    scanf("%d", &n); //taking input from the user
    
    while (i <= n) //loop will run until the value of i is less than or equal to n
    {
       printf("Enter the number you want to add: ");
       scanf("%d", &num); //taking input from the user
       sum = sum + num;//adding the value of num to sum
       i++;
    }
    printf("Sum: %d\n", sum);//printing the sum of the numbers entered by the user
    return 0;
} 