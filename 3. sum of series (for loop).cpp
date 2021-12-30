#include<stdio.h>
main()
{
	int s,n;
	s=0;
	printf("enter the value of 'n'");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		s=0;
		for(int j=1;j<=i;j++)
		{
			s=s+j;
		}		
	}
	printf("sum of series=%d",s);
}

