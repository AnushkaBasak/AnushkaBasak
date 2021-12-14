#include<stdio.h>
main()
{
	int n,k;
	printf("enter a number");
	scanf("%d",&n);
	k=n%2;
	switch(k)
	{
		case 0:
			printf("Even number");
			break;
			
			case 1:
				printf("Odd number");
			break;
			
			default:
					printf("Invalid choice");
			
	}
	
}
