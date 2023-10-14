#include <stdio.h>
void main()
{
 int a=0,b,c=0;
 
 for(a=0;a<15;a++)
  {printf("enter your age");
    scanf("%d",&b);
    if(b>=50&&b<=60)
     { c=c+1;}
    else
     { continue;}
  }
 printf("there are %d number of people belonging to 50-60 year age group",c);
}
  
