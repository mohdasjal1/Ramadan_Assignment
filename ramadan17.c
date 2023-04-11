#include <stdio.h>

// C program to find that the given input is a vowel or a consonant !!

int main()
{
    char letter;
    printf("Enter a Letter : ");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("%c is a vowel", letter);
    }
    
    else{
        printf("%c is a consonant", letter);
    }





    return 0;
}
