#include <stdio.h>

// Write a C program to print all natural numbers in reverse (from n to 1). – using while loop

int main(){
    int n;
    int i = 1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    printf("Natural numbers from %d to 1:\n", n);
    while (n >= i){
        printf("%d ", n);
        n--;
    }
    printf("\n");
    
    return 0;
}