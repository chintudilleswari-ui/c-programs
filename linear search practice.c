#include<stdio.h>
int main()
{
	int a[20],i,key,n,pos,found=0;
	printf("How many elements?");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter element to search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			found=1;
			pos=i;
		}
	}
	if(found==1)
	printf("Element found at index:%d",pos);
	else
	printf("Element not found");
	return 0;
}
