#include<stdio.h>
int main()
{
	int no_row,c=1,blk,i,j;
	printf("INPUT NUMBER OF ROWS:");
	scanf("%d",&no_row);
	for(i=0;i<no_row;i++){
		for (blk=1;blk<=no_row-i;blk++)
		printf(" ");
		for(j=0;j<=1;j++){
		if (j=0||i==0) // If it's the first column or first row, set c to 1.
		c=1;
		else
		c=c*(i-j+1)/j; // Calculate the next pattern value.
		printf("% 4d", c); // Print the pattern value.
		printf("\n"); // Move to the next row.
		return 0;
		}
	}
}
