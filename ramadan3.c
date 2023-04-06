#include <stdio.h>

// Write a C program to print all alphabets from a to z. – using while loop


int main()
{
    char letter = 'a';
    printf("Letters from %c to z :\n", letter);

    while (letter <= 'z')
    {
        printf("%c ", letter);
        letter++;
    }

    printf("\n");
    

    
    return 0;
}