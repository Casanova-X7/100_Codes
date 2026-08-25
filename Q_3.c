#include <stdio.h>
int main() {

    printf("Would u like to find the Area or the Perimeter of a rectangle?\n");
    printf("Enter 'A' for Area or 'P' for Perimeter: ");
    char choice;
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a') {
        // Code for calculating area
    } else if (choice == 'P' || choice == 'p') {
        // Code for calculating perimeter
    } else {
        printf("Invalid choice.\n");
    }

    int length, breadth;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    if (choice == 'A' || choice == 'a') {
        int area = length * breadth;
        printf("Area of the rectangle: %d\n", area);
    } else if (choice == 'P' || choice == 'p') {
        int perimeter = 2 * (length + breadth);
        printf("Perimeter of the rectangle: %d\n", perimeter);
    }

    return 0;
}