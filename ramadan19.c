#include <stdio.h>

// C program to find that the given number is divisible by 5 and 11 or not !!

int main()
{
    int num;

    printf("Enter a  number : ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0 )
    {
        printf("%d is divisible by 5 and 11", num);
    }

    else if (num % 5 == 0)
    {
        printf("%d is divisible by 5", num);
    }
    
    else if (num % 11 == 0)
    {
        printf("%d is divisible by 11", num);
    }
    
    else{
        printf("%d is not divisible by 5 and 11", num);
    }

    return 0;
}
