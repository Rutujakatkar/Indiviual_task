#include<stdio.h>
/*Write a program to find the sum of two matrices of order 2*2 using
multidimensional arrays.*/
int main()
{
    int a[2][2]={{1,2},{3,4}}i,j;
    int b[2][2]={{1,2},{3,4}},c[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;i++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        printf("\n sum=%d",c[i][j]);
    }
    return 0;

}