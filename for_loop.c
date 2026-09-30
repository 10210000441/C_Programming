#include <stdio.h>
int main (){

    
    int i;
    int sum = 0; 
    int n;
    int num;

    printf("How many values do you want to add: "); //asking the user how many numbers they want to add
    scanf("%d", &n); //taking input from the user
    
    for (i=1; i<=n; i++) //loop will run until the value of i is less than or equal to n
    {
       printf("Enter the number you want to add: ");
       scanf("%d", &num); 
       sum = sum + num;
    }
    printf("Sum: %d\n", sum);
    return 0;
}