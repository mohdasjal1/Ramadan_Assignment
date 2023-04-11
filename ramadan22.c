#include <stdio.h>

//C program to print 10 natural numbers with their square and cube !!

int main()
{
    int i;
    printf("NUMBER\tSQUARE\tCUBE\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
    

    return 0;
}
