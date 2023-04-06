#include <stdio.h>

// Write a C program to find the sum of the first and last digit of a number.


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
    printf("Sum of First and Last digit : %d", firstDigit + lastDigit);

    return 0;
}