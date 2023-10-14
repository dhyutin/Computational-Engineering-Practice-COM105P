#include <stdio.h>
void main()
{
  int a;
  printf("Enter the interger ");
  scanf("%d",&a);
   if(a>0)
   {
     printf("%d is a positive integer",a);
   }
  else
    {
      if(a==0)
         {
           printf("%d is zero and is neutral",a);
         }
       else
         {
           printf("%d is a negative integer",a);
         }
     }
}

  
