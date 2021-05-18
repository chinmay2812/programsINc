#include <stdio.h>

int main()
{
    int num,dig;
    printf("Enter a number");
    scanf("%d",&num);
    dig=num%10;
    printf("DIGIT AT ONE's PLACE %d",dig);
    return 0;
}
