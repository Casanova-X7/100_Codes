#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter the roots of the quadratic equation: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > 0 && num2 > 0) {
        printf("The roots of the quadratic equation are real and distinct.\n");

    } else if (num1 == num2 && num1 >= 0 && num2 >= 0) {
        printf("The roots of the quadratic equation are real and equal.\n");

    } else if (num1 < 0 && num2 < 0) {
        printf("The roots of the quadratic equation are imaginary.\n");

    } else {
        printf("The roots of the quadratic equation are imaginary.\n");
    }

    return 0;
    
}