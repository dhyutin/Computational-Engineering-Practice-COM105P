#include <stdio.h>
void main()
{
 int n1,n2;
 printf("enter two positive integers n1 and n2");
 scanf("%d%d",&n1,&n2);
 while(n1!=n2)
  {
   if(n1>n2)
     n1-=n2;
   else
     n2-=n1;
  }
printf("gcd = %d",n1);
}