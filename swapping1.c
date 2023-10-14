#include <stdio.h>
void main()
{
 int a,b,c;
 printf("Enter the values of a and b  ");
 scanf("%d %d", &a,&b);
 c=a;
 a=b;
 b=c;
 printf("After swapping , the value of a is %d and the value of b is %d",a,b);
 }
