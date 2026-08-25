#include <stdio.h>

int main() {

    char str[100];

    printf("Enter a character: ");
    scanf("%s", str);

    if (str[0] >= 'A' && str[0] <= 'Z') {
        printf("%s is an uppercase letter.\n", str);
    } else if (str[0] >= 'a' && str[0] <= 'z') {
        printf("%s is a lowercase letter.\n", str);
    } else if (str[0] >= '0' && str[0] <= '9') {
        printf("%s is a digit.\n", str);
    } else {
        printf("%s is a special character.\n", str);
    }

    return 0;


}