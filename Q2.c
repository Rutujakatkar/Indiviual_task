#include<stdio.h>
#include<string.h>
int main()
{
   char string[20],temp[20];
   int i,length;
   printf("Enter String : ");
   scanf("%s",string);
   length=strlen(string);
 
   for (i=0;i<strlen(string);i++)
   {
        temp[i]=string[i];
        string[i]=string[i++];

   }
    printf("\n reverse string=%s",temp[20]);
    return 0;
}