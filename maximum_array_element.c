//maximum array element
#include<stdio.h>
int main()
{
	int i,large;
	int marks[6];
	printf("Enter array elements:");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&marks[i]);
	}
	large=marks[0];
	for(i=0;i<=5;i++)
	{
		if(large<marks[i])
		{
			large=marks[i];
		}
	}
	printf("largest element is %d\n",large);
	return 0;
}
