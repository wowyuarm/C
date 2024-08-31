#include <stdio.h>
int main(void)
{
    const int daysperweek = 7;
    int days, weeks, day_rem;

    printf("Enter the number of days: ");
    scanf("%d", &days);
    while (days > 0)
    {
        weeks = days / daysperweek;
        day_rem = days % daysperweek;
        printf("%d days are %d weeks and %d days.\n",
            days, weeks, day_rem);

        printf("Enter the number of days (0 or less to end): ");
        scanf("%d", &days);
    }
    printf("Done!\n");
    return 0;
}