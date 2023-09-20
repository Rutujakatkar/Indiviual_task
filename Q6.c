#include<stdio.h>
//Write a program to print EVEN numbers from 1 to N using a while loop
 int main()
 {
    int i=1,n;
    printf("\n enter value of n:");
    scanf("%d",&n);
    printf("\n even numbers from 1 to %d are:",n);
    while(i<=n)
    {
        if(i%2==0)
            printf("\t %d",i);
        i++;
    }
    return 0;
 }