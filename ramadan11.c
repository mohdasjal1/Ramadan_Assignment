#include <stdio.h>

// Write a C program to find the first and last digit of a number.


int main() {
    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    lastDigit = num % 10;

    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}
