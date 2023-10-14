#include <stdio.h>
void main()
{
 int A,B;
  printf("Enter the value of A");
  scanf("%d",&A);
  printf("Enter the value of B ");
  scanf("%d",&B);
   if((A%B)==0)
     {
       printf("%d is divisible by %d",A,B);
     }
   else
     {
      printf("%d is not divisible by %d",A,B);
     }
 }
 
