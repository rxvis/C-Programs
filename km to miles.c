#include <stdio.h>
int main()
{
	int k,m;
	printf("Enter the distance in Km you want to convert to miles : ");
	scanf("%d",&k);
	m=k/1.609;
	printf("Miles = %d",m);
}
