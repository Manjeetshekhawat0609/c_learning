#include <stdio.h>
typedef struct
{
    int hour;
    int minute;
    int second;
} Time;
void compare(Time t1, Time t2)
{
    printf("Comparing times:\n");
    printf("Time 1: %02d:%02d:%02d\n", t1.hour, t1.minute, t1.second);
    printf("Time 2: %02d:%02d:%02d\n", t2.hour, t2.minute, t2.second);
    if (t1.hour < t2.hour)
    {
        printf("Time 1 is earlier than Time 2\n");
    }
    else if (t1.hour > t2.hour)
    {
        printf("Time 1 is later than Time 2\n");
    }
    else
    {
        if (t1.minute < t2.minute)
        {
            printf("Time 1 is earlier than Time 2\n");
        }
        else if (t1.minute > t2.minute)
        {
            printf("Time 1 is later than Time 2\n");
        }
        else
        {
            if (t1.second < t2.second)
            {
                printf("Time 1 is earlier than Time 2\n");
            }
            else if (t1.second > t2.second)
            {
                printf("Time 1 is later than Time 2\n");
            }
            else
            {
                printf("Both times are the same\n");
            }
        }
    }
}
int main()
{
    Time t1, t2;
    printf("Enter time 1 (hour minute second): ");
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);
    printf("Enter time 2 (hour minute second): ");
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);
    compare(t1, t2);
    return 0;
}