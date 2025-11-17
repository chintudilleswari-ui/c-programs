#include<stdio.h>
int main()
{
	int i,n,key,pos=0,low=0,mid=0;
	printf("Enter n value");
	scanf("%d",&n);
	int a[n];
	int high=n-1;
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key to search");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
		pos=mid;
		break;
		}
		else if(key<a[mid])
		{
		high=mid-1;
		}
		else
		{
		low=mid+1;
		}
	}
	printf("Element is found at position:%d",pos);
	return 0;
	}

