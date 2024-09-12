#include<stdio.h>

int main() {
    int weekday;

    printf("Enter weekday number (0-6): ");
    scanf("%d", &weekday);

    switch(weekday) {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        default:
            printf("Invalid weekday number. Please enter a number between 0 and 6.");
    }

    return 0;
}

