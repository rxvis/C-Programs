#include <stdio.h>
int main()
{
	int a;
	printf("Enter marks to check grade : ");
	scanf("%d",&a);
	if (a>=90)
	{
		printf("A+");
	}
	else if(a>=80 && a<90)
	{
		printf("A");
	}
	else if(a>=70 && a<80)
	{
		printf("B+");
	}
	else if(a>=60 && a<70)
	{
		printf("B");
	}
	else if(a>=50 && a<60)
	{
		printf("C+");
	}
	else if(a>=40 && a<50)
	{
		printf("C");
	}
	else if(a>=30 && a<40)
	{
		printf("D+");
	}
	else
	{
		printf("F");
	}
	return 0;
}
