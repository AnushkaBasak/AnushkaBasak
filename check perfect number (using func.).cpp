#include<stdio.h>
void check_perfect(int n);
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	check_perfect(n);
}
void check_perfect(int n)
{
	int s;
	s=0;
	for(int i=1;i<=(n-1);i++)
	{
		if (n%i==0)
		s=s+i;
	}
	if(s==n)
	printf("perfect number");
	else
	printf("not a perfect number");
}
