#include<stdio.h>
void main()
{
int num,i,j,sum=0;
printf("enter integer number:");
scanf("%d",&num);
for(i=1;i<2*num;i++)
{
if(i%2!=0)
{
sum=sum+(i*i);
}
}
printf("\n Sum of square of odd numbers %d",sum);

}

