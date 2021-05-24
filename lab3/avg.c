#include<stdio.h>
#include<math.h>
int avg(int a,int b,int c);
int main()
{
int s1,s2,s3,av;
printf("\n enter first integer");
scanf("%d",&s1);
printf("\n enter second integer:");
scanf("%d",&s2);
printf("\n enter third integer");
scanf("%d",&s3);
av=avg(s1,s2,s3);
printf("avg is= %d",av);
return 0;
}
int avg(int a,int b,int c)
{
int s=0;
return(s=(a+b+c)/3);
}

