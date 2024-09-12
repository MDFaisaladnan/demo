#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    int choice;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    printf("\nChoose an option:");
    printf("\n1. Find roots if they are real and distinct");
    printf("\n2. Find roots if they are real and equal");
    printf("\n3. Find roots if they are complex");
    printf("\nEnter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            if(discriminant > 0) {
                root1 = (-b + sqrt(discriminant)) / (2*a);
                root2 = (-b - sqrt(discriminant)) / (2*a);
                printf("\nRoots are real and distinct: %.2f and %.2f", root1, root2);
            } else {
                printf("\nRoots are not real and distinct.");
            }
            break;
        case 2:
            if(discriminant == 0) {
                root1 = root2 = -b / (2*a);
                printf("\nRoots are real and equal: %.2f", root1);
            } else {
                printf("\nRoots are not real and equal.");
            }
            break;
        case 3:
            if(discriminant < 0) {
                float real = -b / (2*a);
                float imaginary = sqrt(-discriminant) / (2*a);
                printf("\nRoots are complex: %.2f + %.2fi and %.2f - %.2fi", real, imaginary, real, imaginary);
            } else {
                printf("\nRoots are not complex.");
            }
            break;
        default:
            printf("\nInvalid choice. Please choose a number between 1 and 3.");
    }

    return 0;
}
