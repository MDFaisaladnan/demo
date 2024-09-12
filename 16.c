#include<stdio.h>

int main() {
    int num1, num2;
    char choice;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("\nMenu:");
    printf("\nA. Addition");
    printf("\nS. Subtraction");
    printf("\nM. Multiplication");
    printf("\nD. Division");
    printf("\nEnter your choice (A/S/M/D): ");
    scanf(" %c", &choice); 

    switch(choice) {
        case 'A':
        case 'a':
            printf("\nResult: %d + %d = %d", num1, num2, num1 + num2);
            break;
        case 'S':
        case 's':
            printf("\nResult: %d - %d = %d", num1, num2, num1 - num2);
            break;
        case 'M':
        case 'm':
            printf("\nResult: %d * %d = %d", num1, num2, num1 * num2);
            break;
        case 'D':
        case 'd':
            if(num2 != 0)
                printf("\nResult: %d / %d = %.2f", num1, num2, (float)num1 / num2);
            else
                printf("\nError! Division by zero is not allowed.");
            break;
        default:
            printf("\nInvalid choice. Please choose A, S, M or D.");
    }

    return 0;

}    