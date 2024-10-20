#include <stdio.h>
int main()
{
	int r;
	printf("Enter the radius of circle : ");
	scanf("%d",&r);
	printf("Area of the given circle with radius %d is %d",r,(22/7)*(r*r));
	return 0;
}
