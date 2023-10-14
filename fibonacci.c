#include <stdio.h>
void main()
{
 int a,b,c,e,n;
 a=0;
 b=1;
 e=0;
 printf("Enter the value of n");
 scanf("%d",&n);
 while(e<=n)
  {
   c=a+b;
   a=b;
   b=c;
   printf(" %d \n",a);
   e++;
   }
 
 }
