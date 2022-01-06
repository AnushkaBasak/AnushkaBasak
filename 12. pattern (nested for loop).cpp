#include<stdio.h>
main()
{
	int k;
	k=1;
	for (int i=1;i<=4;i++)
	{
		for(int j=1;j<=i;j++)
		{
		printf("%d\t",k);
		k++;	
		}
		printf("\n");
	}
}

