#include <stdio.h>
int main()
 {
	int s,sml, pos;

	printf("enter size of the array:\n");
	scanf("%d", &s);

	int a[s];
    printf("enter the array elements:\n");
	for(int i = 0; i < s; i++)
	{
			scanf("%d", &a[i]);
	}
	sml=a[0];
	pos=0;
	for(int i = 0; i < s; i++)
	{
		if(sml > a[i])
		{
			sml= a[i];
			pos=i;
		}
	}

	printf("Smallest element: %d\n", sml);
	printf("Position of the element: %d\n", pos);
	return 0;
}
