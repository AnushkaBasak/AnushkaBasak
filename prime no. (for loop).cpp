#include<stdio.h>
main()
{
	int n,c;
	c=0;
	printf("enter a number");
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if (n%i==0)
		c++;
	}
	if (c==0)
	printf("it is a prime no.");
	else
	printf("it is not a prime no.");
}
