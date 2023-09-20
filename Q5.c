#include<stdio.h>
//Write a program to print weekday of given date.

int main()
{
    int date=20;
    if(date%7==1)
    {
        printf("\n The day on a date %d is Monday",date);
    }
    else if(date%7==2)
    {
        printf("\n The day on a date %d is Tuesday",date);
    }
    else if(date%7==3)
    {
        printf("\n The day on a date %d is Wednsday",date);
    }
    else if(date%7==4)
    {
        printf("\n The day on a date %d is Thursday",date);
    }
    else if(date%7==5)
    {
        printf("\n The day on a date %d is Friday",date);
        
    }
    else if(date%7==6)
    {
        printf("\n The day on a date %d is Saturday",date);
    }
    else
    {
        printf("\n The day on a date %d is Sunday",date);
    }
    return 0;

}