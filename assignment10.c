#include <stdio.h>

int main()
{
    int year, month, days, i, day;
    int startDay;

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Enter year: ");
    scanf("%d", &year);

    // Calculate the starting day of the year
    int y = year - 1;
    startDay = (y * 365 + y / 4 - y / 100 + y / 400 + 1) % 7;

    for (month = 0; month < 12; month++)
    {
        switch (month)
        {
            case 0: case 2: case 4: case 6:
            case 7: case 9: case 11:
                days = 31;
                break;

            case 3: case 5: case 8: case 10:
                days = 30;
                break;

            case 1:
                if ((year % 400 == 0) ||
                    (year % 4 == 0 && year % 100 != 0))
                    days = 29;
                else
                    days = 28;
                break;
        }

        printf("\n\n       %s %d\n", months[month], year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        for (i = 0; i < startDay; i++)
            printf("    ");

        for (day = 1; day <= days; day++)
        {
            printf("%4d", day);

            if ((startDay + day) % 7 == 0)
                printf("\n");
        }

        startDay = (startDay + days) % 7;
    }

    return 0;
}

