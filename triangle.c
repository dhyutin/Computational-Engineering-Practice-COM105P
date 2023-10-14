#include <stdio.h>
void main()
{
 int A,B,C;
 printf("Enter the measure of angle A,B,C of tiangle ABC in degrees ");
 scanf("%d %d %d",&A,&B,&C);
 if((A+B+C)==180)
   {
     printf("The given triangle is valid and possible to construct");
   }
 else
   {
    printf("The given triangle is not valid and not possible to construct");
   }
}

 
