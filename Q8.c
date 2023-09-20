#include<stdio.h>
//Write a program to find second largest number in an array.

int main()
{
    int a[5]={1,2,3,4,5},i,max;
    
    for(i=0;i<5;i++)
    {
        if(a[i]>a[i++])
            {
                
            }
        else
        {
            max=a[i++];
            printf("\n %d is greater",max);
        }
    }
    return 0;

}