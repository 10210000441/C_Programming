#include <stdio.h>
int main()
{
    float percentage, maths;
    percentage;
    maths;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    printf("Enter your maths marks: ");
    scanf("%f", &maths);

    if (percentage >= 70 && maths >= 80)
    {
        printf("You are eligible for DIT CE");
        // if(maths >= 80){
        //     printf("You are eligible for DIT CE");
        // }
        // else{
        //     printf("You are not eligible for DIT CE");
        // }
    }
    else
    {
        printf("You are not eligible for DIT CE");
    }

    return 0;
}