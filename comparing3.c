#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter the values of a,b and c  ");
scanf("%d %d %d",&a,&b,&c);

if(a>b)
    {
       if (a>c)
           {
              printf("a is the greatest of a,b,c");
              }
       else
       {
       printf("c is the greatest of a,b,c");
       }
    }
else
   {
      if(b>c)
         {
         printf("b is the greatest of a,b,c.");
         }
      else
         {
         printf("c is the greatest of a,b,c.");
         }
    }
}
  
