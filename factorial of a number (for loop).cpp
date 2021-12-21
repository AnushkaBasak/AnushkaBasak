#include<stdio.h>
main()
{
	int n,f;
	f=1;
	printf("enter a number");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The factorial=%d",f);
}
