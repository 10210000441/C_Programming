#include <stdio.h>

int main() {
   int a,b,c;
   int sum;
   float average;

   a=10;
   b=20;
   c=30;

    sum=a+b+c;
    printf("Sum: %d\n", sum);
    average=(float)sum/3;
    printf("Average: %.2f\n", average);

    // char name [15];
    // printf("Enter your name: ");
    // scanf("%14s", name);
    // printf("Name: %s\n", name);

    int e,f;
    printf("Enter values for e and f: ");
    scanf("%d %d", &e, &f);
    printf("e: %d, f: %d\n", e, f); 



    return 0;
}


