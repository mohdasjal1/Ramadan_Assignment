#include <stdio.h>

// Write a C program to print multiplication table of any number using for and while loop


int main()
{
    int n, i = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("\nMultiplication table of %d using for loop : \n", n);

    for (int i = 1; i <=10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i );
    }
    
    printf("\nMultiplication table of %d using while loop :  \n", n);

    while (i <= 10)
    {
        printf("%d X %d = %d\n", n, i, n * i );
        i++;
    }
    

    return 0;
}
