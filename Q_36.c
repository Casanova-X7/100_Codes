#include <stdio.h>

// Function to find HCF/GCD using the Euclidean algorithm
int findHCF(int a, int b) {
    
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2, hcf;

    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter valid integers.\n");
        return 1;
    }

    hcf = findHCF(num1, num2);

    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;

}
