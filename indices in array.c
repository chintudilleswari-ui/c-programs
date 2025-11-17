//working with indices in array
#include<stdio.h>
int main()
{
	int n,sum=0;
	int i;
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("%d",sum);
	return 0;
}
