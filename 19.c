#include<stdio.h>

int main() {
    char alphabet;

    printf("Enter an alphabet: ");
    scanf(" %c", &alphabet);

    switch(alphabet) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.", alphabet);
            break;
        default:
            if((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
                printf("%c is a consonant.", alphabet);
            else
                printf("Invalid input. Please enter an alphabet.");
    }

    return 0;
}
