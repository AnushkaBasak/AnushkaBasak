#include<stdio.h>
int find_factorial(int n);
int main()
{
int n,f;
printf("enter a number ");
scanf("%d",&n);
f=find_factorial(n);
printf("factorial=%d",f);
return 0;	
}
int find_factorial(int n)
{
	int f;
	f=1;
	for(int i=1;i<=n;i++)
	{
	f=f*i;
}
	return f;
}


