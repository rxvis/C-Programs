#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number to check if it is Odd or Even : ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}
	return 0;
}
