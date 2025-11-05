#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("ENTER A NUMBR:");
	scanf("%d",&n);
	nfor(int i =-n+1;i<n;i++){
		for (int j=-n+1;j<n;j++){
			int max=abs(i)>abs(j)?abs(i):
				printf("%d",max+1);
		}
		printf("\n");
	}
	return 0;
}
