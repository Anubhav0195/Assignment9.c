#include<stdio.h>
int main()
{
    int year,remainder;
    printf("Enter year\n");
    scanf("%d",&year);
    remainder=((year%4==0) && ((year%400==0) || (year%100!=0)));
    switch(remainder)
    {
        case 1:
        printf("leap year");
        break;
        case 0:
        printf("Not a leap year");
        break;
        default:
        printf("Invalid");
    }









    return 0;
}