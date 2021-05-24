#include<stdio.h>

int sum(int n)
{
   int a=0;
   for(int i=1; i<=n; i++)
   {
     a=a+i;
   }
   return a;
}

int main()
{
   int num, r;
   printf("num upto which sum is to be found ");
   scanf("%d", &num);
   r = sum(num);
   printf("sum of n natural number= %d",r);
}
