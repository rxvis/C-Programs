#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);
	printf("The average of %d, %d and %d is %d",a,b,c,(a+b+c)/3);
	return 0;
}
