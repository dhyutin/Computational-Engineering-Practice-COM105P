#include <stdio.h>
void main()
{
 int a,b;
 a=b=1;
 do
   { b=1;
   }
 do
   { printf("%d\t",a+b);
     b++;}
 while(b<11);
printf("\n");
a++;
}
while(a<13);
}