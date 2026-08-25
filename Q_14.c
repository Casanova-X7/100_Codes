#include <stdio.h>

int main() {
    
    char str[100];
    printf("Enter a alphabet: ");
    scanf("%s", str);

    if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' ||
        str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U') {
        printf("%s is a vowel.\n", str);
    } else {
        printf("%s is a consonant.\n", str);
    }

    return 0;

}