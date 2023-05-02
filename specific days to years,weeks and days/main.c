#include <stdio.h>
#include <stdlib.h>

int main()
{
    int years, weeks, days;
    //days = 1329;
    printf("Number of Days: ");
    scanf("%d",&days);
    years = days/365;
    weeks = (days%365)/7;
    days = days-((years*365)+(weeks*7));

    printf("years: %d\n",years);
    printf("weeks: %d\n",weeks);
    printf("days: %d\n",days);
    return 0;
}
