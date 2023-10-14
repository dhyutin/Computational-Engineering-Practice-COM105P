#include <stdio.h>
void main()
{
 int n,a,b;
 a=1;
 b=0;
 printf("Enter a number");
 scanf("%d",&n);
 while(a<=n)
 { 
  if(n%a==0)
   { 
     printf("%d \n",a);
     b++;
   }
   a++;
 }
 if(b==2)
   {printf("Prime");}
 else
   {printf("not prime");}
   
}

  

