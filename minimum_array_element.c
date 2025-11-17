//minimum array element
#include<stdio.h>
int main()
{
	int i,small;
	int marks[6];
	printf("Enter array elements:");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&marks[i]);
	}
	small=marks[0];
	for(i=0;i<=5;i++)
	{
		if(small>marks[i])
		{
			small=marks[i];
		}
	}
	printf("smallest element is %d\n",small);
	return 0;
}
