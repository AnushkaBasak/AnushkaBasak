#include<stdio.h>
main()
{
	int n,a,b,c;
	a=0;
	b=1;
	printf("enter the number till where you want the fibonacci series");
	scanf("%d",&n);
	printf("%d\n",a);
		printf("%d\n",b);
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
