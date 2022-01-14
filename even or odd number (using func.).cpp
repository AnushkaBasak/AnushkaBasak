#include<stdio.h>
void check(int n);
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	check(n);
}
void check(int n)
{
	if(n%2==0)
	printf("Even number");
	else
	printf("Odd number");
}

