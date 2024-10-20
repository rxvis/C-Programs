#include <stdio.h>
int main()
{
	int c,f;
	printf("Enter celcius you want to convert to Farenheit : ");
	scanf("%d",&c);
	f=(c*9/5)+32;
	printf("Fareheit = %d",f);
	return 0;
}
