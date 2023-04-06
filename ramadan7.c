#include <stdio.h>

// Write a C program to find the sum of all even numbers between 1 to n.


int main()
{
    int n, i = 1, sum = 0;

    printf("Enter an even integer : ");
    scanf("%d", &n);    

    while (i <= n)
    {
        if (i % 2 == 0)
        {
        /*sum += i*/ sum = sum + i;        
        }
        i++;
        
        
    }
    printf("Sum of all even numbers from 1 to %d is : %d", n, sum);
    
    
    return 0;
}
