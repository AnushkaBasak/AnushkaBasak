#include<stdio.h>
#include<math.h>
main()
{
	int x,n,s,f;
	f=1;
	printf("enter the value of 'n'");
	scanf("%d",&n);
	printf("enter the value of 'x'");
	scanf("%d",&x);
	for (int i=0;i<=n;i++)
	{
		s=0;
		f=f*i;
		for(int j=0;j<=i;j++)
		{
		s=s+((pow(x,n))/f);
		}
	}
	printf("sum of series=%d\n",s);
}


	

