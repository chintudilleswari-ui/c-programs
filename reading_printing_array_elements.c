//reading and printing array elements
#include<stdio.h>
int main()
{
	int marks[6];
	int i;
	printf("Enter array elements:");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=5;i++)
	{
		printf("%d\n",marks[i]);
	}
	return 0;
}
