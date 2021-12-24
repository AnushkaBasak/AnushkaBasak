#include<stdio.h>
main()
{
	int n,s,d,n1,r;
	s=0;r=0;
	printf("enter a number");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		d=n%10;
		r=(r*10)+d;
		n=n/10;
	}
	if(r==n1)
	printf("Pallindrome no.");
	else
		printf("not a Pallindrome no.");
	}
