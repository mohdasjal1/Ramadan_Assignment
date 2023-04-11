#include <stdio.h>

// Write a C program to find grade against percentage !!

int main() {
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90) {
        printf("Your grade is A++\n");
    }
    else if (percentage >= 80) {
        printf("Your grade is A+\n");
    }
    else if (percentage >= 70) {
        printf("Your grade is A\n");
    }
    else if (percentage >= 60) {
        printf("Your grade is B\n");
    }
    else if (percentage >= 50) {
        printf("Your grade is C\n");
    }
    else if (percentage >= 40) {
        printf("Your grade is D\n");
    }
    else {
        printf("You've Failed !!\n");
    }

    return 0;
}
