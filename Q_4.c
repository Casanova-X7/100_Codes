#include <stdio.h>
int main() {
    printf("Would u like to find the Circumference or the Area of a circle?\n");
    printf("Enter 'C' for Circumference or 'A' for Area: ");

    char choice;
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c') {
        // Code for calculating circumference
    } else if (choice == 'A' || choice == 'a') {
        // Code for calculating area
    } else {
        printf("Invalid choice.\n");
    }

    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    if (choice == 'C' || choice == 'c') {
        float circumference = 2 * 3.14159 * radius;
        printf("Circumference of the circle: %.2f\n", circumference);
    } else if (choice == 'A' || choice == 'a') {
        float area = 3.14159 * radius * radius;
        printf("Area of the circle: %.2f\n", area);
    }
    return 0;
}