//search an element in array
#include<stdio.h>
int main()
{
	int array[100],search,c,n;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	printf("Enter %d integer(s)\n",n);
	for(c=0;c<n;c++)
	{
	scanf("%d",&array);
	}
	printf("Enter a number to search\n");
	scanf("%d",&search);
	for(c=0;c<n;c++)
	{
		if(array[c]==n)
		{
			printf("%d is preasent at location %d\n",search,c+1);
			break;
		}
	}
	if(c==search)
	printf("%d isn't preasent in the array.\n",search);
	return 0;           
}
