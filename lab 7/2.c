#include <stdio.h>
#include <conio.h>
int main()
{
int marks[4][3],i,j,high;
for(i=0;i<4;i++)
{
printf("\n enter marks obtained by student %d",i+1);
for(j=0;j<3;j++)
{
printf("\n marks[%d][%d]= ",i,j);
scanf("%d",&marks[i][j]);
}
}
for(j=0;j<3;j++)
{
high=marks[0][j];
for(i=0;i<4;i++)
{
if(marks[i][j]>high)
   high=marks[i][j];
}

printf("\n highest marks obtained in subject %d= %d",j+1,high);
}
getch();
return 0;
}
