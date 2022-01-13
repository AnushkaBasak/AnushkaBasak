
#include <stdio.h>
int main()
int  prime(int num)
{
	 num,res=0;
	
	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	res=prime(num);
	if(res==0)
		printf("\n%d IS A PRIME NUMBER",num);
	else
		printf("\n%d IS NOT A PRIME NUMBER",num);
	
}
int prime(int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
