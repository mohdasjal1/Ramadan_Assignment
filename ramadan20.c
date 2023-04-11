#include <stdio.h>

// C program to check wether a character is uppercase or lowercase !!

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'A' && character <= 'Z') {
        printf("%c is uppercase.\n", character);
    }
    else if (character >= 'a' && character <= 'z') {
        printf("%c is lowercase.\n", character);
    }
    else {
        printf("%c is not a letter.\n", character);
    }

    return 0;
}
