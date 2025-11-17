//finding area of circle
#include<stdio.h>
#define PI 3.14
int main()
{
	float radius,area;
	printf("Enter radius of circle:");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("area of circle=%.2f\n",area);
	return 0;
}
