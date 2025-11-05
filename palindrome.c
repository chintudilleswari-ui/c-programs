#include<stdio.h>
#include<math.h>
int main()
{
	int p,n,r=0,s=0;
	printf("ENTER A NUMBER:");
	scanf("%d",&p);
	n=p;
	while (n>0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(p==s){
		printf("\nIT IS A PALINDROME");
	}
	else {
		printf("NOT A PALINDROME\n");
	}
	return 0;
}
