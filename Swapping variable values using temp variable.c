#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value for a : ");
	scanf("%d",&a);
	printf("Enter a value for b : ");
	scanf("%d",&b);
	printf("Variable values before swapping\na=%d\nb=%d\n\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("Variable values after swapping\na=%d\nb=%d",a,b);
	return 0;
}
