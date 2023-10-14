#include <stdio.h>
void main()
{
  int n,count,sum;
  count=1;
  printf("Enter the value of n ");
  scanf("%d",&n);
    while(count<=n)
    { 
      printf("%d \n",count);
      count++;
    }
 sum = n*(n+1)/2;
 printf("The sum of the first %d natural numbers is %d",n,sum);
 
 }
 
