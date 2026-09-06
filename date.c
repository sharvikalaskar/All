#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter the date\n");
    scanf("%d %d %d", &day, &month, &year);

    while (day < 1 || day > 31 || month < 1 || month > 12)
    {
        printf("Invalid date\n");
        printf("Enter the date\n");
        scanf("%d %d %d", &day, &month, &year);
    }
    while((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        printf("Invalid date\n");
        printf("Enter the date\n");
        scanf("%d %d %d", &day, &month, &year);
    }
      while((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
    {
        printf("Invalid date\n");
        printf("Enter the date\n");
        scanf("%d %d %d", &day, &month, &year);
    }
      while(month == 2 && day > 28 && year / 4 != 0)
    {
        printf("Invalid date\n");
        printf("Enter the date\n");
        scanf("%d %d %d", &day, &month, &year);
    }
      while(month == 2 && day > 29 && year / 4 == 0)
    {
        printf("Invalid date\n");
        printf("Enter the date\n");
        scanf("%d %d %d", &day, &month, &year);
    }

    6-
    printf("You entered %d-%d-%d\n", day, month, year);

    return 0;
}

