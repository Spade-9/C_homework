#include <stdio.h>

int getDays(int, int);

int main()
{
    int year, month;

    scanf("%d%d", &year, &month);
    printf("There are %d days in month %d year %d.", getDays(year, month), month, year);

    return 0;
}

int getDays(int year, int month)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 2:
        return 28 + ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    }
}