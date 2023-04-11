#include <stdio.h>

// C program to find that the given num is +ve or -ve !!

int main()
{
    int num;
    int input_check;

    printf("Enter an integer : ");
    input_check = scanf("%d", &num);

    if (input_check == !1)
    {
        printf("Error: Please enter an integer.\n");
        return 1;
    }
    
    else if (num > 0)
    {
        printf("%d is positive !!", num);
    }

    else if (num == 0)
    {
        printf("%d is ZERO !!", num);
    }
        
    else{
        printf("%d is negative !!", num);
    }
    

    return 0;
}
