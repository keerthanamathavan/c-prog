#include<stdio.h>
#include<conio.h>
void main()
{
  int sum=0,i,n;
  printf("Enter the n numbers:");
  scanf("%d",n);
  for(i=1;i<6;i++)
   {
     sum+=i;
   }
   printf("Sum of %d is=%d",n,sum);
 }
