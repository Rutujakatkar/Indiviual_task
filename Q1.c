#include<stdio.h>
int main()
{
    int num,i,cube=1;
    printf("\n enter num:");
    scanf("%d",&num);
    for(i=0;i<=2;i++)
    {
        cube=cube*num;
    }
    printf("\n cube=%d",cube);
    return 0;
}