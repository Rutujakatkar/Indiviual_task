#include<stdio.h>
//Write a program to read an integer and print its multiplication table.
int main()
{
    int num,i,table;
    printf("\n enter any number:");
    scanf("%d",&num); 
    printf("\n Here is the table of number %d",num);
    for(i=1;i<=10;i++)
    {
        table=num*i;
        printf("\t %d",table);
    }
    return 0;
}