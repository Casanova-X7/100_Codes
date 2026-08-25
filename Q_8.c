#include <stdio.h>
int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("You entered: %d\n", n);

    printf("The sum of first %d natural numbers is: %d\n", n, (n * (n + 1)) / 2);
    
    return 0;
}