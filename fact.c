#include<stdio.h>
#include<conio.h>
void main()
{
  int fact,i,n
  printf("Enter the value:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      fact=fact*i;
    }
    printf("factorial of %d is %d",n,fact);
    }
