#include <stdio.h>

int main()
{
    int year;
    printf("Enter Year : ");
    scanf("%d",&year);

    if(year%100 == 0)
    {
        if(year%400 == 0)
        {
            printf("Leap Year ! ");
        }
        else if(year %4 ==0)
        {
           printf(" Not a leap Year !");
        }
        
    }
    else if(year % 4 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Enter valid year : ");
    }
}