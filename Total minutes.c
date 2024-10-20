#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter hours : ");
	scanf("%d",&a);
	printf("Enter minutes : ");
	scanf("%d",&b);
	c=(a*60)+b;
	printf("Total minutes = %d",c);
	return 0;
}
