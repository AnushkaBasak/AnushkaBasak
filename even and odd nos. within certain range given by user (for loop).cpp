#include<stdio.h>
main()
{
	int m,n;
	printf("Enter starting value and ending value of range");
	scanf("%d%d",&m,&n);
   printf("The even nos. are: \n");
	for (int i=m;i<=n;i+=2)
	{
		printf("%d \n",i);
	}
	printf("The odd nos. are: \n");
	for (int i=m+1;i<=n;i+=2)
	{
		printf("%d \n",i);
	}
	
}

