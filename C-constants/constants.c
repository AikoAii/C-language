#include <stdio.h>

int main() {
    const int minutesPerHour = 60;
    const int monthsPerYear = 12;
    const int BIRTHDAY = 1990; //Another thing about constant variables, is that it is considered good practice to declare them with uppercase.

    printf("minute/hour: %d\n", minutesPerHour);
    printf("months/year: %d\n", monthsPerYear);
    printf("my birthday: %d", BIRTHDAY);

    return 0;
}