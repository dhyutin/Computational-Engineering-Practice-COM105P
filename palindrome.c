#include <stdio.h>
void main()
{
 int r,var=0,q;
 printf("Enter a number");
 scanf("%d",&q);
 while(q!=0)
  {
  
     r=q%10;
    var=10*var+r;
    q=q/10;
  }
  printf("the reverse of the given number is %d,var);
  
 if(var==q)
  {
   printf("palindrome");
   }
 else
  printf("not palindrome");
}
  
   
 
