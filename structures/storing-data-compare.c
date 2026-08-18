#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};
void compare(struct date d1, struct date d2)
{
    printf("Comparing dates:\n");
    printf("Date 1: %02d/%02d/%04d\n", d1.day, d1.month, d1.year);
    printf("Date 2: %02d/%02d/%04d\n", d2.day, d2.month, d2.year);
    if (d1.year < d2.year)
    {
        printf("Date 1 is earlier than Date 2\n");
    }
    else if (d1.year > d2.year)
    {
        printf("Date 1 is later than Date 2\n");
    }
    else
    {
        if (d1.month < d2.month)
        {
            printf("Date 1 is earlier than Date 2\n");
        }
        else if (d1.month > d2.month)
        {
            printf("Date 1 is later than Date 2\n");
        }
        else
        {
            if (d1.day < d2.day)
            {
                printf("Date 1 is earlier than Date 2\n");
            }
            else if (d1.day > d2.day)
            {
                printf("Date 1 is later than Date 2\n");
            }
            else
            {
                printf("Both dates are the same\n");
            }
        }
    }
}
int main()
{
    struct date d1, d2;
    printf("Enter day: ");
    scanf("%d", &d1.day);
    printf("Enter month: ");
    scanf("%d", &d1.month);
    printf("Enter year: ");
    scanf("%d", &d1.year);
    printf("\nDate 1: %02d/%02d/%04d\n", d1.day, d1.month, d1.year);
    printf("Enter day: ");
    scanf("%d", &d2.day);
    printf("Enter month: ");
    scanf("%d", &d2.month);
    printf("Enter year: ");
    scanf("%d", &d2.year);
    printf("\nDate 2: %02d/%02d/%04d\n", d2.day, d2.month, d2.year);
    compare(d1, d2);
    return 0;
}