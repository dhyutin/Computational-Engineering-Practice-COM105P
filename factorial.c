#include <stdio.h>
void main()
{
 int num,a=1;
 printf("enter the number");
 scanf("%d",&num);
 while(num>0)
  { a=a*num;
    num=num-1;
   }
  printf("the factorial of the given number is %d",a);
}
   
