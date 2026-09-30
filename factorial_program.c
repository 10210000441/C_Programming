#include <stdio.h>

int main(){

    int i=1;
    int f=1;
    int n;

    printf("Enter a number to calculate its factorial: "); 
    scanf("%d", &n); 
    while (i <= n)
    {
       f=f*i;
       i++;

    }
     printf("Factorial: %d\n", f);

    return 0;
}