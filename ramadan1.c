#include <stdio.h>

// Write a C program to print all natural numbers from 1 to n. – using while loop


int main(){
    int n;
    int i = 1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d:\n", n);
    while (i <= n){
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    return 0;
}