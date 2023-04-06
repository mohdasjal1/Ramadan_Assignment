#include <stdio.h>

// Write a C program to find the sum of all odd numbers between 1 to n.


int main()
{
    int n, i = 1, sum = 0;

    printf("Enter an odd integer : ");
    scanf("%d", &n);    

    while (i <= n)
    {
        if (i % 2 != 0)
        {
        /*sum += i*/ sum = sum + i;        
        }
        i++;
        
        
    }
    printf("Sum of all odd numbers from 1 to %d is : %d", n, sum);
    
    
    return 0;
}
