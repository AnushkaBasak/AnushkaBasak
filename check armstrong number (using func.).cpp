#include<stdio.h>
void check_armstrong(int n);
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	check_armstrong(n);
}
void check_armstrong(int n)
{
	int d,s,n1;
	s=0;
	n1=n;
	while(n>0)
	{
		d=n%10;
		s=s+(d*d*d);
		n=n/10;
	}
	if(s==n1)
	printf("armstrong number");
	else
		printf("not an armstrong number");
}
