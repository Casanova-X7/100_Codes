#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, rem, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count the number of digits
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate the sum of each digit raised to the power of digits
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp = temp / 10;
    }

    if (sum == num)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}