#include<stdio.h>
#include<conio.h>
void main()
{
  int sum,n,i;
  sum=0;
  printf("Enter the n numbers:");
  scanf("%d",&n);
  for(i=1;i<n;i++)
   {
     sum+=i;
   }
   printf("sum of %d numbers=%d",n,sum);
 }
