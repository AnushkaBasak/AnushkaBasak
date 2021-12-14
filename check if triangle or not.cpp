#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("enter three angles of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if((sum==180)&& (a!=0||b!=0||c!=0))
    {
    	printf("It is a triangle");
	}
	else
	{
		printf("It is not a triangle");
	}
}

