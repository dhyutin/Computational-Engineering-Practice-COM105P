#include <stdio.h>
void main()
{
 int a,b;
 printf("Enter the values of a and b ");
 scanf("%d %d",&a,&b);
 a = a+b;
 b = a-b;
 a = (a+b)/2;
 printf("After swapping,the values of a and b are %d and %d respectively ",a,b);
}

