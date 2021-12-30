#include<stdio.h>
#include<math.h>
main()
{
	int x,n,s;
	s=0;
    printf("enter the value of 'n'");
	scanf("%d",&n);
	printf("enter the value of 'x'");
	scanf("%d",&x);
	for(int i=0;i<=n;i++)
	{
		s=s+pow(x,n);
	}
	printf("Sum of series=%d",s);
}


