#include <stdio.h>
int main() {

    int variable1, variable2;

    printf("Enter the first variable: ");
    scanf("%d", &variable1);

    printf("Enter the second variable: ");
    scanf("%d", &variable2);

    printf("Before swapping: variable1 = %d, variable2 = %d\n", variable1, variable2);

    variable1 = variable1 + variable2;
    variable2 = variable1 - variable2;
    variable1 = variable1 - variable2;

    printf("After swapping: variable1 = %d, variable2 = %d\n", variable1, variable2);
    return 0;
}