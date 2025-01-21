/*
6. Write a program that determines the day number (1 to 366) in a year for a date that is provided as input data. As an 
example, January 1, 1994, is day 1. December 31, 1993, is day 365. December 31, 1996, is day 366, since 1996 is a leap
year. A year is a leap year if it is divisible by four, except that any year divisible by 100 is a leap year only if it 
is divisible by 400. Your program should accept the month, day, and year as integers. Include a function leap that returns
1 if called with a leap year, 0 otherwise.
*/

#include <stdio.h>

int leap(int year);
int leap(int year) {
    if (year % 4 == 0 || year % 100 == 0 && year % 400 == 0) 
        return 1;
    return 0;
}

int main() {
    int daysInMonths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, day, year;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the day (1-31): ");
    scanf("%d", &day);

    printf("Enter the year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12 || day < 1 || day > daysInMonths[month]) {
        printf("Enter valid input.");
        return 0;
    }

    if (leap(year))
        daysInMonths[2] = 29;

    int dayNumber = 0;
    for (int i = 1; i < month; i++) {
        dayNumber += daysInMonths[i];
    }
    dayNumber += day;
    printf("Day number for given input is: %d", dayNumber);
}

/*
Output
Enter the month (1-12): 8
Enter the day (1-31): 2
Enter the year: 2001
Day number for given input is: 214
*/