#include <stdio.h>

// Write a C program to find the sum of all natural numbers between 1 to n

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter a positive integer : ");
    scanf("%d", &n);    

    while (i <= n)
    {
        /*sum += i*/ sum = sum + i;
        i++;
    }
    printf("Sum of all natural numbers from 1 to %d is : %d", n, sum);
    
    
    return 0;
}
