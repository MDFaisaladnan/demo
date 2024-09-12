#include<stdio.h>

int main() {
    int amount, notes;

    printf("Enter the total amount: ");
    scanf("%d", &amount);

    notes = amount / 100;
    printf("%d notes of Rs 100\n", notes);
    amount %= 100;

    notes = amount / 50;
    printf("%d notes of Rs 50\n", notes);
    amount %= 50;

    notes = amount / 20;
    printf("%d notes of Rs 20\n", notes);
    amount %= 20;

    notes = amount / 10;
    printf("%d notes of Rs 10\n", notes);
    amount %= 10;

    notes = amount / 5;
    printf("%d notes of Rs 5\n", notes);
    amount %= 5;

    notes = amount / 2;
    printf("%d notes of Rs 2\n", notes);
    amount %= 2;

    notes = amount / 1;
    printf("%d notes of Rs 1\n", notes);

    return 0;
}
