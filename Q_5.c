#include <stdio.h>
int main() {

    printf("Enter the temperature in Celsius: ");

    float celsius;
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}