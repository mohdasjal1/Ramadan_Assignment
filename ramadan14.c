#include <stdio.h>

// Write a C program to find that the given input is even or odd !!

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number you've entered is even !!");
    }

    else{
        printf("The number you've entered is odd !!");
    }
    

    return 0;
}
