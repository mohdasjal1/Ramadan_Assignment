#include <stdio.h>

// Write a C program to print all even numbers between 1 to 100. – using while loop


int main()
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 2 == 0)
        {
        printf("%d\n", i);
        }
        i++;
        
            
    }
    
    return 0;
}