#include<stdio.h>
//Write a program to Calculate Product of Digits of a Number.
int main()
{
    int num,i,Product=1,digit;
    printf("\n enter number:");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        Product=Product*digit;
        num=num/10;

    }
    printf("\n product of digits of a number is: %d",Product);
    return 0;
}