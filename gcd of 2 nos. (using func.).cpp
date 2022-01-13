#include<stdio.h>
int find_gcd(int a,int b);
int main()
{
	int gcd,a,b;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	gcd=find_gcd(a,b);
	printf("the GCD=%d",gcd);
	return 0;
}
int find_gcd(int a,int b)
{
	int gcd;
	for(int i=1;i<=a&&i<=b;i++)
	{
		if (a%i==0 && b%i==0)
		gcd=i;
	}
	return gcd;
}
