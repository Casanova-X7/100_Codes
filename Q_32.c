#include <stdio.h>

int main() {
    int num, temp, rem, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }

    if (num == reverse)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}