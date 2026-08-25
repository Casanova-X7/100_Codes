#include <stdio.h>

int main() {
    int num;

    printf("Enter the Percentage obtained: ");
    scanf("%d", &num);

    if(num >= 90){
        printf("Grade A");
    } else if (90 > num && num >= 80) {
        printf("Grade B");
    } else if (80 > num && num >= 70) {
        printf("Grade C");
    } else if (70 > num && num >= 60) {
        printf("Grade D");
    } else if (60 > num) {
        printf("Grade F");
    }

    return 0;
    
}