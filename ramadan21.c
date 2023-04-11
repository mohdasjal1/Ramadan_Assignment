#include <stdio.h>

// C program to input a week number and print weekday !!

int main()
{
    char weekdays[][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int week_number;

    printf("Enter a week number : ");
    scanf("%d", &week_number);
    
    switch(week_number) {
        case 1:
            printf("%s", weekdays[0]);
            break;
        case 2:
            printf("%s", weekdays[1]);
            break;
        case 3:
            printf("%s", weekdays[2]);
            break;
        case 4:
            printf("%s", weekdays[3]);
            break;
        case 5:
            printf("%s", weekdays[4]);
            break;
        case 6:
            printf("%s", weekdays[5]);
            break;
        case 7:
            printf("%s", weekdays[6]);
            break;
        default:
            printf("Invalid week number\n");

    }


    return 0;
}
