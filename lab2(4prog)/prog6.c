#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a number");
    scanf("%d",&a);
    b=a%100;
    c=b/10;
    printf("DIGIT At ten's PLACE is %d ",c);
    return 0;
}
