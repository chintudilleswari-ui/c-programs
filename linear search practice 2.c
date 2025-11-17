#include<stdio.h>
int main()
{
	int a[20],i,key,n,pos,found=0;
	printf("How many elements?");
	scanf("%d",&n);
	printf("Enter array elements:");
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Element to search:%d",key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			found=1;
			pos=i;
		}
	}
	if(found==1)
	{
		printf("Element is found");
	}
	else
	{
		printf("Element is not found");
	}	
	return 0;	
}
