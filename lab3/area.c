#include<stdio.h>
#include<math.h>
float area(float a,float b, float c);
int main()
{
float a,b,c;
float ar;
printf("\n enter first side:");
scanf("%f",&a);
printf("\n enter second side:");
scanf("%f",&b);
printf("\n enter third side:");
scanf("%f",&c);
ar=area(a,b,c);
printf("area is= %f",ar);
return 0;
}
float area(float a,float b,float c)
{
float s,ar;
s=(a+b+c)/2;
ar=sqrt(s*(s-a)*(s-b)*(s-c));
return ar ;
}

