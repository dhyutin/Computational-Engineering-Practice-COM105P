#include <stdio.h>
void main()
{
 int a,b,c;
 a=1;
 b=0;
 while(a<=100)
 {a++;
     if(a%30==0)
    { b++;}
 }c=100-b;
   
    printf("the number of numbers which are between 1 and 100 and are not divisible by 2,3,and5 is %d",c);
}
