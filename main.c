#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec,h,m,s;
    printf("input seconds: \n");
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec-(3600*h))/60;
    s=(sec-(3600*h)-(m*60));
    printf("There are:\n");
    printf("H:M:S - %d:%d:%d\n",h,m,s);
    return 0;
}
