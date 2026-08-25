#include <stdio.h>
int main() {

    int t;

    printf("Enter time in seconds: ");
    scanf("%d", &t);

    int hours = t / 3600;
    int minutes = (t % 3600) / 60;
    int seconds = t % 60;

    printf("Time in hours:minutes:seconds: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}