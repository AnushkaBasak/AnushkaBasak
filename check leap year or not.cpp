#include<stdio.h>
main()
{
	int year;
	printf("enter any year");
	scanf("%d",&year);
	if (year%4==0) 
	{
		printf("it is a leap year");
	}
	else
	{
		printf("it is not a leap year");
	}
	
}

