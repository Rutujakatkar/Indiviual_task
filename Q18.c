#include<stdio.h>
//18.Write a program to sort even and odd elements of an array separately.
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
            printf("\n even number=%d",a[i]);
        else
            printf("\n odd numbers=%d",a[i]);    

    }
    
}