#include<stdio.h>
#include<math.h>
int main()
{
  int x1,x2,y1,y2;
  float dis=0.0;
  printf("enter the points");
  scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
  dis=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  printf("\n \n The distance bw the points is%f",dis);

  return 0;
}
