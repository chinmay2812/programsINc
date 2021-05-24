#include<stdio.h>

float square(float a)
{

   return (a*a);
}

 int main()
{
   float num, r;
   printf("enter number ");
   scanf("%f", &num);
   r = square(num);
   printf("square of number %f",r);
   return 0;
}
