#include<stdio.h>

int main()
{
   char st1[100],st2[100];
   printf("\nEnter the string :");
   gets(st1);
   int i=0,len;
   while(st1[i]!='\0')
{
    st2[i]=st1[i];
    i++;
}
   len=i;
   st2[i]='\0';
   printf("\nCopied String is %s",st2);
   printf("\nlength of String is %d",len);

   return (0);
}
