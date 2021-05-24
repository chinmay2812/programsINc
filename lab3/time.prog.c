#include<stdio.h>
#include<math.h>
void time(int t,int h, int m);
int main()
{
int ti,hr,rem;
printf("\n enter time in minutes");
scanf("%d",&ti);
time(ti,hr,rem);
return 0;
}
void time(int t,int h,int m)
{
h=(t/60);
m=t%60;
printf("equivalent hours is %d",h);
printf("equivalent minutes is %d",m);

}




