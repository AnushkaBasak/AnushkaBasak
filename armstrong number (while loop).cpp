#include<stdio.h>
main()
{
	int n,s,d,n1;
	s=0;
	printf("enter a number");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		d=n%10;
		s=s+(d*d*d);
		n=n/10;
	}
		if(s==n1)
	printf("Armstrong no.");
	else
	printf("Not an Armstrong no.");
	}
	

	


